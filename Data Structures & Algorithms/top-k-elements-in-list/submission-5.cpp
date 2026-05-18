class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        
        for(auto num:nums){
            um[num]++;
        }
        vector<int> init{};
        vector<vector<int>> buckets(nums.size()+1,init);

        for(auto itr=um.begin();itr!=um.end();itr++){
            buckets[itr->second].push_back(itr->first);
        }

        vector<int> result{};
        for(int idx=buckets.size()-1;idx>0;idx--){
            vector<int> bucket=buckets[idx];
            if(bucket.size() > 0 && k > 0){
                for(auto val: bucket){
                    result.push_back(val);
                    k--;
                }
            }
            }
        return result;

    }
};
