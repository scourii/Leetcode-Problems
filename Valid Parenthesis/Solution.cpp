class Solution {
public:
    bool isValid(string s) {
        stack<char>pair;
        
        for (int i = 0; i < s.size(); i++)
        {
            if(pair.size() > 0 && pair.top() == '(' && s[i] == ')')
                pair.pop();
            else if (pair.size() > 0 && pair.top() == '{' && s[i] == '}')
                pair.pop();
            else if (pair.size() > 0 && pair.top() == '[' && s[i] == ']')
                pair.pop();
            else
                pair.push(s[i]);
        }
        return pair.empty();
    }
};
