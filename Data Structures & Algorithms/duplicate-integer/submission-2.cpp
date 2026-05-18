class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto num:nums){
            if (set.count(num)==1){
                return true;
            } else{
                set.insert(num);
            }
        }
        return false;
    }
};
