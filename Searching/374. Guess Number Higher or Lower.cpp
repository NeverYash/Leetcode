class Solution {
public:
    int guessNumber(int n) {
        int res=n;
        while(res>0){
            if(guess(res)==0){
            return res;
            break;
            }
            if(guess(n)==-1){
                res -= 1;
            }
            else{
                res += 1;
            }
        }
        return res;
    }
};