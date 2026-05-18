class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int curr_sum = 0, len = numbers.size(), left = 0, right = len-1;
        vector<int> result{0, 0};

        while(left < right && left >= 0 && right < len){
            curr_sum = numbers[left] + numbers[right];
            if (curr_sum == target){
                result[0] = left+1;
                result[1] = right+1;
                return result;
            } else if(curr_sum > target){
                right--;
            } else{
                left++;
            }
        }
        return result;
    }
};
