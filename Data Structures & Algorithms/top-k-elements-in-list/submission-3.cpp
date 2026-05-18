class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (auto num: nums){
            umap[num]++;
            // cout << umap[num] << endl;
        }
        vector<int> init{};
        vector<vector<int>> counts{nums.size()+1, init};
        for(auto it = umap.begin(); it != umap.end(); it++){
            counts[it->second].push_back(it->first);
            cout << it->second << "\t" << it->first << endl;
        }
        vector<int> result{};
        int n = 0;
        for(int i=counts.size()-1; i>=0; i--){
            n = counts[i].size();
            if (n > 0 && k > 0){
                for(auto element:counts[i]){
                    result.push_back(element);
                    k--;
                }
            }
        }
        return result;
    }
};
