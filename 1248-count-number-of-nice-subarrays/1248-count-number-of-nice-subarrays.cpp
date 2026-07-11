class Solution {
public:
    // Function to count subarrays with exactly k odd numbers
    int numberOfSubarrays(vector<int>& nums, int k) {

        // Frequency map to track how often a certain odd count has occurred
        unordered_map<int, int> freq;

        // Initialize with 0 count of odd numbers seen so far
        freq[0] = 1;

        // Running count of odd numbers in the current prefix
        int oddCount = 0;

        // Total number of nice subarrays
        int result = 0;

        // Traverse through each element in the array
        for (int num : nums) {

            // Check if current number is odd and update count
            if (num % 2 == 1) oddCount++;

            // If there exists a prefix with (current odd count - k), add its frequency to result
            if (freq.count(oddCount - k)) {
                result += freq[oddCount - k];
            }

            // Update the frequency of current odd count
            freq[oddCount]++;
        }

        // Return the total number of valid subarrays
        return result;
    }
};

