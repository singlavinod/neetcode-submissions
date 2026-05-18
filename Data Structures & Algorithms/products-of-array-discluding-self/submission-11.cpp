class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prodBefore(n, 1);
        vector<int> prodAfter(n, 1);

        for(int i=1; i<n; i++){
            prodBefore[i] = nums[i-1]*prodBefore[i-1];
            cout<<prodBefore[i]<<endl;
        }
        for(int j=n-2; j>=0; j--){
            prodAfter[j] = nums[j+1]*prodAfter[j+1];
        }

        vector<int> result(n, 1);
        for(int k=0; k<n; k++){
            result[k] = prodBefore[k]*prodAfter[k];
        }
        return result;
    }
};
