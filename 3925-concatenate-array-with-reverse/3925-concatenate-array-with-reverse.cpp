class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        // Appends elements from back to front directly into nums
        nums.insert(nums.end(), nums.rbegin(), nums.rend()); 
        return nums;
    }
};