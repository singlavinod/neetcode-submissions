class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> umap;
        for(auto curr_string: strs){
            string temp = curr_string;
            sort(curr_string.begin(), curr_string.end());
            if (umap.find(curr_string) == umap.end()){
                vector<string> init{temp};
                umap[curr_string] = init;
            } else{
                umap[curr_string].push_back(temp);
            }
        }
        for (auto it = umap.begin(); it != umap.end(); it++){
            result.push_back(it->second);
        }
        return result;
    }
};
