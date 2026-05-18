class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen = 0, currLen = 0;
        unordered_set<int> uset(nums.begin(), nums.end());
        for(auto num:nums){
            if(uset.count(num+1)==0){
                currLen = 0;
                while(uset.count(num - currLen)){
                    currLen++;
                }
                maxLen = max(maxLen, currLen);
            }
        }
        return maxLen;
    }
};
