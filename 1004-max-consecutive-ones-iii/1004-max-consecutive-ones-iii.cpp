class Solution {
public:
    // Function to find the longest subarray with at most k zero flips
    int longestOnes(vector<int>& nums, int k) {

        // Left pointer for the sliding window
        int left = 0;

        // Counter to track how many zeros are in the current window
        int zeros = 0;

        // Variable to store the maximum length found
        int maxLen = 0;

        // Iterate through the array using the right pointer
        for (int right = 0; right < nums.size(); right++) {

            // If current element is zero, increment zero counter
            if (nums[right] == 0) {
                zeros++;
            }

            // If number of zeros exceeds k, shrink the window from left
            while (zeros > k) {
                if (nums[left] == 0) {
                    zeros--;
                }
                // Move the left pointer forward
                left++; 
            }
            // Update the max length of valid window
            maxLen = max(maxLen, right - left + 1);
        }

        // Return the result
        return maxLen;
    }
};

