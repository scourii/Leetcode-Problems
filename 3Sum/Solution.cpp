class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int size = nums.size();
        // You cannot have any triplets when the size is greater than 3.
        if (size < 3)
            return {}; 
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size - 1; i ++)
        {
            // Keeps list moving on forward.
            
            if (i != 0 && nums[i]==nums[i - 1])
                continue;
            
            int low = i + 1, high = size - 1; // Setting up the last variables and first variables.
            
            while (low < high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum == 0) 
                {
                    res.push_back({nums[i], nums[low], nums[high]});
                    // Stores the lowest iteration and the highest iteration.
                    int last_left = nums[low], last_right = nums[high];
                    // Keeps increasing low until the statement isn't true anymore.
                    while(low < high && last_left == nums[low])
                        low++;
                    // Keeps decreasing high until the statement isn't true anymore.
                    while (low < high && last_right == nums[high])
                        high--;
                }
                else if (sum > 0)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
        return res;
    }
};
