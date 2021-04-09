class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanMap;
        
        romanMap['I'] = 1;
        romanMap['V'] = 5;
        romanMap['X'] = 10;
        romanMap['L'] = 50;
        romanMap['C'] = 100;
        romanMap['D'] = 500;
        romanMap['M'] = 1000;
        
        int number = 0, i = 0;
        
        if (s.length() <= 0)
        {
            return romanMap[s.at(0)];
        }
        else
        {
            while(i<s.size()) 
            {
                
                if (romanMap[s[i]]<romanMap[s[i+1]])
                {
                    number+=romanMap[s[i+1]]-romanMap[s[i]];
                    i+=2;
                }
                else
                {
                    number+=romanMap[s[i]];
                    i++;
                }
                
            }
        }
        return number;
    }
};
