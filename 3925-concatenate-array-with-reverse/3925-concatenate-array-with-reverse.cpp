class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> rev = nums; 
        reverse(rev.begin(), rev.end()); // Modifies rev in place
        nums.insert(nums.end(), rev.begin(), rev.end()); // Faster than back_inserter
        return nums;
    }
};