class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> L = new ArrayList<>();
        Arrays.sort(nums);
        if(nums[0]>0){
            return L;
        }
        for(int i=0;i<nums.length;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int a=i,b,c,sum=0;
            b = i+1;
            c = nums.length-1;
            while(b<c){
                sum = nums[a]+nums[b]+nums[c];
                if(sum<0){
                    b++;
                }
                else if(sum>0){
                    c--;
                }
                else{
                    ArrayList<Integer>al = new ArrayList<>();
                    al.add(nums[a]);
                    al.add(nums[b]);
                    al.add(nums[c]);
                    L.add(al);
                    b++;
                    c--;
                    while(b<c && nums[b] == nums[b-1]){b++;}
                    while(b<c && nums[c] == nums[c+1]){c--;}

                }
            }
        }
        return L;
    }
}
