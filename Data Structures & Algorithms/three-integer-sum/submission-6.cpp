class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), l=0, r=n-1, threesum = 0;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n-2; i++){
            l = i+1;
            r = n-1;
            if(i > 0 && nums[i-1]==nums[i]){
                continue;
            }
            while(l<r){
                threesum = nums[i] + nums[l] + nums[r];
                if(threesum == 0){
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(nums[l-1]==nums[l] && l < r){
                        l++;
                    }
                }
                else if(threesum > 0){
                    r--;
                } else{
                    l++;
                }
            }
        }
    return res;
    }
};
