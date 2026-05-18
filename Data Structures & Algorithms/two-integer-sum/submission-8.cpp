class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> buffer;
        for(int i=0; i < nums.size(); i++) {
            if (buffer.find(target - nums[i]) != buffer.end()){
                return {buffer[target - nums[i]], i};
            } else {
                buffer.insert({nums[i], i});
            }           
        }
        return {};
    }
};
