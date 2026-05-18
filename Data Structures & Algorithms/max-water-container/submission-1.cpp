class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size(), maxWater = 0;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++) {
                maxWater = max(maxWater, (j-i)*(min(heights[i], heights[j])));
            }
        }
    return maxWater;
    }
};
