class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1, postfix = 1;
        vector<int> output(n, 1);

        for(int i=1; i<n; i++){
            prefix *= nums[i-1];
            output[i] *= prefix;
        }

        for(int i=n-2; i>-1; i--){
            postfix *= nums[i+1];
            output[i] *= postfix;
        }
        return output;
    }
};
