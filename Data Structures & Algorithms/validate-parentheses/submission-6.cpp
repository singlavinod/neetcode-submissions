class Solution {
public:
    bool isValid(string s) {
        if (s.size() <= 1){
            return false;
        }
        stack<char> buffer;
        for(auto ch:s){
            // cout << ch << endl;
            if (ch == '(' || ch == '{' || ch == '['){
                buffer.push(ch);
            } else{
                if (buffer.size() >= 1){
                    char top = buffer.top();
                    buffer.pop();
                    if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']')){
                        continue;
                    }else{
                        return false;
                    }
                } else{
                    return false;
                }
            }
        }
        return buffer.size() == 0;
    }
};
