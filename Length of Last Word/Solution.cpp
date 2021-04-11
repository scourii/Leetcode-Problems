class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream number(s);
        s = "";
        while (number >> s);
        return s.length();
    }
};
