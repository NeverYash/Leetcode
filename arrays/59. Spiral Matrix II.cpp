class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n));
        int row_start=0,row_end=n-1,col_start=0,col_end=n-1;
        int a = 1;

        while(row_start<=row_end && col_start<=col_end){
            for(int col=col_start;col<=col_end;col++){
                res[row_start][col] = a;
                a++;
            }
            row_start++;
            for(int row = row_start;row<=row_end;row++){
                res[row][col_end]=a;
                a++;
            }
            col_end--;
            if(col_start<=col_end){
                for(int col=col_end;col>=col_start;col--){
                    res[row_end][col]=a;
                    a++;
                }
                row_end--;
            }
            if(row_start<=row_end){
                for(int row=row_end;row>=row_start;row--){
                    res[row][col_start]=a;
                    a++;
                }
                col_start++;
            }
        }

     return res;   
    }
};
