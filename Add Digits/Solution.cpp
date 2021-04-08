class Solution {
public:
    int addDigits(int num) {
        if (num < 10) return num;
        return (num % 9 == 0 ? 9 : num%9); // Conditional Ternary Operator in the case that num % 9  isnt true, which then leads to it being repeated once more.
    }
};
