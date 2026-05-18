class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l=0, r=matrix.size()-1,top=0, btm=matrix.size()-1;
        int topLeft;

        while(l<r){
            for(int i=0; i<r-l; i++){
                top = l;
                btm = r;
                topLeft = matrix[top][l+i];
                matrix[top][l+i] = matrix[btm-i][l];
                matrix[btm-i][l] = matrix[btm][r-i];
                matrix[btm][r-i] = matrix[top+i][r];
                matrix[top+i][r] = topLeft;
            }
            l++;
            r--;
        }
    }
};
