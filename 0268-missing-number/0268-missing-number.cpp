class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> vec((nums.size()+1),0);
        for(int i: nums){
            vec[i]+=1;
        }
        auto it = find(vec.begin(), vec.end(),0);
        int index = distance(vec.begin(), it); 
        return index;
    }
};