class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int n = nums.size();
        int sum = nums[0];
        int curr_sum = 0;
        for(int i = 0; i < n; i++){
            curr_sum = nums[i];
            sum = max(sum, curr_sum);
            for(int j = i+1; j < n; j++){
                curr_sum += nums[j];
                sum = max(sum, curr_sum);
            }
        }
        return sum;
    }
};
