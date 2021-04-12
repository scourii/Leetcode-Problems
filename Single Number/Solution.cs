public class Solution {
    public int SingleNumber(int[] nums) {
        int result = nums[0];
        
        for (int i = 1; i<nums.Length; i++)
            result^=nums[i]; // Result is equal to result or nums[i], **XOR** for reference.
        return result;
    }
}
