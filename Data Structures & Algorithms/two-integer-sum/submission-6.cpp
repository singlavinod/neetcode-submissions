class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;

        for(int i=0;i<nums.size();i++){
            um[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(um.count(target-nums[i]) > 0 && i!=um[target-nums[i]])
                return {i, um[target-nums[i]]};
        }
        return {};
    }
};
