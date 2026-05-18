class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int streak{}, length{};

        for(auto num:nums){
            if(s.count(num-1)==0){// start of sequence
                length=1;
                while(s.count(num+length)){
                    length++;
                }
            }
            streak=max(streak, length);
        }
        return streak;
    }
};
