class Solution {
public:
    int findMin(vector<int> &nums) {
        int min_ = 2^32 - 1;
        for(auto num: nums){
            min_ = (num < min_) ? num : min_;
        }
        return min_;
    }
};
