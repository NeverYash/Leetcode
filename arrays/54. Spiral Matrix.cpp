class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
       
        vector<int>result;
        while(row_start<=row_end && col_start<=col_end){

            for(int col = col_start;col<=col_end;col++){
                result.push_back(matrix[row_start][col]);
            }
            row_start++;
            for(int row=row_start;row<=row_end;row++){
                result.push_back(matrix[row][col_end]);
            }
            col_end--;
            if(row_start<=row_end){
            for(int col=col_end;col>=col_start;col--){
                result.push_back(matrix[row_end][col]);
            }
            row_end--;
            }
            if(col_start<=col_end){
            for(int row=row_end;row>=row_start;row--){
                result.push_back(matrix[row][col_start]);
            }
            col_start++;
            }
        }

       return result; 
    }
};
