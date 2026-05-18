class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_set<int> numset(nums.begin(), nums.end());
        // return numset.size() != nums.size();
        unordered_set<int> s;
        for(auto num : nums){
            if (s.find(num)!=s.end()) return true;
            else s.insert(num);
        }
        return false;
    }
};
