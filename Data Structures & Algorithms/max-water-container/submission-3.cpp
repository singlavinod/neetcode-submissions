class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size(), maxArea = 0, l = 0, r = n-1;
        while(l<r) {
            maxArea = max(maxArea, (r-l)*min(heights[l], heights[r]));
            if (heights[l] < heights[r]){
                l += 1;
            }else{
                r -= 1;
            }
        }
        return maxArea;
    }
};
