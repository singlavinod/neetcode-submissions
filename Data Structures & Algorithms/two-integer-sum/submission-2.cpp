class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup;
        int curr;
        for(int i=0; i<nums.size(); i++){
            curr = target-nums[i];
            if (lookup.count(curr)){
                return {lookup[curr], i};
            }
            lookup[nums[i]] = i;
        }
        return {};        
    }
};
