class Solution {
public:
    void reverseString(vector<char>& s) {
        int sizeofstring = s.size() - 1;
        int i = 0;
        while (i < sizeofstring)
        {
            swap(s[i++], s[sizeofstring--]); // Swaps the value of the 0 +, and the value of the last index value.
        }
       
    }
};
