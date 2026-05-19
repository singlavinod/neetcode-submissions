class Solution {
public:
    bool isPalindrome(string s) {
        string buf;
        for(char element:s){
            if (isalnum(element))
                buf.push_back(tolower(element));
        }
        int left = 0, right = (int)buf.size() - 1;
        while(left < right){
            if (buf[left] != buf[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
