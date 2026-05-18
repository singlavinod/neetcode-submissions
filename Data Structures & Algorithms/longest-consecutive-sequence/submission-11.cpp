class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> buffer;

        for(auto &num:nums){
            buffer.insert(num);
        }

        int streak=0,  curr=0, currN=0;
        for(auto & num:nums){
            if (!buffer.count(num-1)){
                curr = 1;
                currN = num+1;
                while(buffer.count(currN)){
                    curr++;
                    currN++;
                }
                streak = max(streak, curr);
            }
        }
        return streak;
    }
};
