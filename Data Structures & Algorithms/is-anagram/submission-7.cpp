class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        vector<int> counts(26,0);
        for(int i=0;i<s.size();i++){
            counts[int(s[i]-'a')] += 1;
            counts[int(t[i]-'a')] -= 1;
        }
        for(int i=0;i<26;i++){
            if (counts[i] != 0){
                return false;
            }
        }
        return true;
    }
};
