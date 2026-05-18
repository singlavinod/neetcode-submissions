class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for (auto element:strs){
            for(auto ch:element){
                result  += char(int(ch));
            }
            result += char(128);
            cout << result << endl;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string element;    
        for(auto ch:s){
            if(ch != char(128)){
                element += ch;
            } else{
                // cout << element << endl;
                result.push_back(element);
                element.erase(element.begin(), element.end());
            }
        }
        return result;
    }
};
