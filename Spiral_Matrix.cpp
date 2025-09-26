class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int btm=n-1;
        int left=0;
        int right=m-1;
        vector<int>v;
        while(top<=btm&&left<=right){
            for(int i=left;i<=right;i++){
                v.push_back(matrix[top][i]);
            }
                top++;
            for(int i=top;i<=btm;i++){
                v.push_back(matrix[i][right]);
            }
                right--;
            if(top<=btm){
            for(int i=right;i>=left;i--){
                v.push_back(matrix[btm][i]);
            }
                btm--;
            }
            if(left<=right){
            for(int i=btm;i>=top;i--){
                v.push_back(matrix[i][left]);
            }
                left++;
            }
        }
        return v;
    }
};