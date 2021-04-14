class Solution {
public:
    bool isPalindrome(int x) {
        
        long reverseNumber = 0, testCase = x;
        
        if (x < 0)
            return false;
        
        while (testCase > 0)
        {
            reverseNumber = testCase % 10 + reverseNumber * 10;
            testCase /= 10;
        }
        
        return reverseNumber==x;
    }
};
