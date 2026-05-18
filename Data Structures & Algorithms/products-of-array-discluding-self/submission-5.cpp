class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        int prefix = 1;
        for (int i = 1; i<n; i++){
            prefix *= nums[i-1];
            result[i] = prefix;
        }
        int postfix = 1;
        for (int i = n-2; i>=0; i--){
            postfix *= nums[i+1];
            result[i] *= postfix;
        }
        return result;
    }
};
