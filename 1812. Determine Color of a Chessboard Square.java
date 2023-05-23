class Solution {
    public boolean squareIsWhite(String coordinates) {
        int a = coordinates.charAt(1);
        a = a -48 ;
        char b =  coordinates.charAt(0);
        if(b=='a' || b== 'c'||b=='e'||b=='g'){
                if(a%2 == 0)
                return true;
                else
                return false;
        }
        else{
            if(a%2==0)
            return false;
            else
            return true;
        }
    }
}
