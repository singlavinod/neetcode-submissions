class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res{};
        int n = nums.size(), l=0, r=n-1, threesum=0;

        for(int idx=0;idx<n-2;idx++){
            if(idx > 0 && nums[idx]==nums[idx-1]){
                continue;
            }
            l = idx + 1;
            r = n - 1;
            while(l < r){
                threesum = nums[idx]+nums[l]+nums[r];
                if(threesum == 0){
                    res.push_back({nums[idx], nums[l], nums[r]});
                    l++; r--;
                    while(l < r && nums[l]==nums[l-1]){
                        l++;
                    }
                }else if (threesum > 0){
                    r--;
                }else{
                    l++;
                }                
            }
        }
        return res;
    }
};
