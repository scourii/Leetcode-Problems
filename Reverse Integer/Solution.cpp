class Solution {
public:
    int reverse(int x) {
        long ReverseInt = 0;    
        while(x != 0)
        {
            ReverseInt = ReverseInt*10 + x%10;
            x /= 10;
            // This is here because of the limitations of 32 bit integers.
            if (abs(ReverseInt) > INT_MAX)
              return 0;  
        }
        return ReverseInt;
    }
};
