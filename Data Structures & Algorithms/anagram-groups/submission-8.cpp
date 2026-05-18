class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        if (n<=1){
            return {strs};
        }
        vector<vector<string>> res;
        map<vector<int>, vector<string>> umap;
        
        for (int i=0;i<n;i++){
            vector<int> counts(26,0);
            for(auto ch:strs[i]){
                counts[int(ch-'a')] += 1;
            }
            umap[counts].push_back(strs[i]);
        }
        for(auto it = umap.begin();it!=umap.end();it++){
            res.push_back(it->second);
        }

        return res;
    }
};
