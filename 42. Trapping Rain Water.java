class Solution {
    public int trap(int[] height) {
        int re = 0;
        int l = 0;
        int r = height.length-1;
        int lm =height[0];
        int rm = height[height.length-1];
        while(l<r){
                if(lm>rm){
                    re += rm-height[r];
                    r--;
                    if(height[r] > rm)
                    rm = height[r];
                }
                if(lm<=rm){
                    re += lm - height[l];
                    l++;
                    if(height[l]>lm)
                    lm = height[l];
                }
        }
        return re;
        
    }
}
