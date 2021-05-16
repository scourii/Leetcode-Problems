public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int length = nums.Length;
        
        for(int i = nums.Length-1; i >= 0; i--)
        {
            if (nums[i] == val)
            {
                length--;
                nums[i] = nums[length];
            }
        }
        return length;
    }
}
