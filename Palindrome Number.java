class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
        return false;
        int temp = x;
        int r=0,s=0;
        while(x != 0){
            r = x%10;
            s = (s*10)+r;
            x /= 10;
        }
        if(temp == s)
        return true;
        else
        return false;
    }
}
