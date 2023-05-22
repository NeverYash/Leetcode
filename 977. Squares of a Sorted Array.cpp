class Solution {
    public int[] sortedSquares(int[] nums) {
      //creating new array
        int result[] = new int[nums.length];
        for(int i=0;i<nums.length;i++){
          //squaring every element in array"nums" and storing in result array
            result[i] = nums[i]*nums[i];
        }
      //sorting result array
        Arrays.sort(result);
        return result;
    }
    
} 
