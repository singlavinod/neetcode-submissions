class Solution {
public:
    int maxArea(vector<int>& heights) {
        // area = index_diff * min_height
        int l = 0, r = heights.size()-1, maxW=0;
        while(l < r){
            maxW = max(maxW, (r-l)*min(heights[r], heights[l]));
            if(heights[r] > heights[l]) l++;
            else r--;
        }
        return maxW;
    }
};
