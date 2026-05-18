class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> um;

        for(int idx = 0; idx< s.length(); idx++){
            um[s[idx]]++;
            um[t[idx]]--;
        }

        for (int idx=0; idx<um.size();idx++){
            if(um[s[idx]] != 0) return false;
        }

        return true;
    }
};