class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       return distance(begin(nums), unique(begin(nums), end(nums))); // C++ comes automatically with a function that only returns the unique intergers of an array.
    }
};
