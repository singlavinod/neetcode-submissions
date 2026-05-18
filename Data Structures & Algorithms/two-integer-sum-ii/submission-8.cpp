class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        int s;
        while(l<r){
            s = numbers[l] + numbers[r];
            if(s < target){
                l++;
            } else if (s > target){
                r--;
            } else{
                return {l+1, r+1};
            }
        }
        return {};
    }
};
