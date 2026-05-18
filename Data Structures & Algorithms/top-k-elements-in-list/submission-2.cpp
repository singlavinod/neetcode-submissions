class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> buffer;
        for (auto num: nums){
            buffer[num]++;
        }

        vector<pair<int, int>> counts;
        auto it = buffer.begin();
        while(it != buffer.end()){
            counts.push_back({it->second, it->first});
            it++;
        }

        sort(counts.rbegin(), counts.rend());
        vector<int> result;
        int idx = 0;
        while(k > 0){
            result.push_back(counts[idx].second);
            idx++;
            k--;
        }
        return result;
    }
};
