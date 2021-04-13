public class Solution {
    public int ThreeSumClosest(int[] nums, int target) {
        Array.Sort(nums); // Sorts array.
        int closest = 0;
        int minimumDifference = int.MaxValue;
        for (int i = 0; i < nums.Length - 2; i++)
        {
            int j = i + 1; // After iteration
            int k = nums.Length - 1; // Previous iteration
            while (j < k)
            {
                // Sum is the total of all the 3 iterations of the list.
                
                int sum = nums[i] + nums[j] + nums[k]; 
                
                if (sum == target)
                    return sum;
                // Continues to next iteration if all the sums is still less than the target.
                if (sum < target) 
                    j++;
                // Goes to the previous iteration if sum is greater than the target.
                else 
                    k--;
                
                // Converts all the values in the list to ints and subtracts by whatever the target value is.
                
                int difference = Math.Abs(sum - target);
                
                //Minimum difference is lowered to match the same value of difference.
                
                if (difference < minimumDifference)
                {
                    minimumDifference = difference; 
                    closest = sum;
                }
            }
        }
        return closest;
    }
}
