class Solution {
    public int singleNumber(int[] nums) {
        int i = 0;
        int result = 0;
        for(i=0;i<nums.length;i++){
            result ^=nums[i];
        }
        return result;
        
    }
}
