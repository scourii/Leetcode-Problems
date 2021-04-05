public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        // Creates new dictionary
        var dictionary = new Dictionary<int, int>(); 
        
        // Sets up a variable i in a forloop, while it is less then the length of nums, itll get added one. 
        
        for (int i = 0; i < nums.Length; i++) 
        {
            // If dictionary has the target - index number of nums
            
            if (dictionary.ContainsKey(target - nums[i])) 
            {
                return new int[] { dictionary[target - nums[i]], i};
            }
            // If it doesnt contain the index number in nums, add one to the numberlength until the forloop is true.
            else if (!dictionary.ContainsKey(nums[i]))  
            {
                dictionary.Add(nums[i], i);
            }
        }
        return null;       
    }
}
