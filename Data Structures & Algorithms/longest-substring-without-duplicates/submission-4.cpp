class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0, n=s.size(), maxL=0;
        unordered_set<int> uset{};
        for(int r=0; r<n; r++){
            while(uset.count(s[r])){
                uset.erase(s[l]);
                l++;
            }
            uset.insert(s[r]);
            maxL = max(maxL, r-l+1);
        }
        return maxL;
    }
};
