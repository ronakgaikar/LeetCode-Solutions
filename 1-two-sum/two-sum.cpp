class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> l;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
            if(nums[i]+nums[j] == target){
                l.push_back(i);
                l.push_back(j);
            }
            }
        }
        return l;
    }
};