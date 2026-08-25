class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=0;
        for(i=k;i<=100;i+=k){
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                break;
            }
        }
        return i;
    }
};