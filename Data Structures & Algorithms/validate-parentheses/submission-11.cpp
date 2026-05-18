class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> um={{'}', '{'}, {']', '['}, {')', '('}};
        stack<char> sc{};
        for(auto & ch:s){
            if(um.count(ch)){
                if(!sc.empty() && sc.top()==um[ch]){
                    sc.pop();
                }else return false;
            } else{
                sc.push(ch);
            }
        }
        return sc.empty();
    }
};
