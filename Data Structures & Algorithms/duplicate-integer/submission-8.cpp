class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> buffer;
        for (int i = 0; i < nums.size(); i++){
            if (buffer.find(nums[i]) != buffer.end()){
                return true;
            }else{
                buffer.insert(nums[i]);
            }
            
        }
        return false;
    }
};