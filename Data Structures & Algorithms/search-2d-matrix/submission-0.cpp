class Solution {
public:
    bool searchVector(vector<int> &vec, int target){
        int l=0, r=vec.size()-1, mid;
        while(l<=r){
            mid = l + (r-l)/2;
            if(vec[mid]==target) return true;
            else if(vec[mid]<target) l = mid+1;
            else r=mid-1;
        }
        return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int top = 0, btm = r - 1, mid=(top+btm)/2;
        while(top<=btm){
            mid=(top+btm)/2;
            if(target>matrix[mid][c-1]) top = mid+1;
            else if (target<matrix[mid][0]) btm = mid-1;
            else break;
        }
        if(top>btm) return false;
        return searchVector(matrix[mid], target);
    }
};
