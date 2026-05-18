class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> buffer(26, 0);

        for(int i = 0; i <s.length(); i++){
            buffer[int(s[i]) - int('a')] += 1;
            buffer[int(t[i]) - int('a')] -= 1;
        }

        for(auto it = buffer.begin(); it < buffer.end(); it++){
            if (*it != 0){
                return false;
            }
        }
        return true;

        }
};
