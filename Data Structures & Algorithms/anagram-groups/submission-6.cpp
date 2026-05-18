class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    map<vector<int>, vector<string>> umap;
    
    for(auto key: strs){
        vector<int> count(26,0);
        for (auto chr: key){
            count[chr - 'a'] += 1;
        }
        if (umap.find(count) == umap.end()){
            vector<string> init{key};
            umap[count] = init;
        } else{
            umap[count].push_back(key);
        }
    }
    for (auto it = umap.begin(); it != umap.end(); it++){
        result.push_back(it->second);
    }
    return result;
    }
};
