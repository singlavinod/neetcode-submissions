class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> chars_s(26, 0);
        vector<int> chars_t(26, 0);

        for(auto chr:s) {
            chars_s[int(chr) - int('a')] += 1;
        }

        for(auto chr:t) {
            chars_t[int(chr) - int('a')] += 1;
        }

        return chars_s == chars_t;
    }
};
