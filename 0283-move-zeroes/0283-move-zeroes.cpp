class Solution {
public:
    // Function to move all zeroes to end
    vector<int> moveZeroes(vector<int>& arr) {
        // Create temp array
        vector<int> temp(arr.size(), 0);

        // Pointer to fill temp
        int index = 0;

        // Traverse input array
        for (int i = 0; i < arr.size(); i++) {
            // If non-zero, add to temp
            if (arr[i] != 0) {
                temp[index] = arr[i];
                index++;
            }
        }

        // Copy back temp to original
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }

        // Return updated array
        return arr;
    }
};
