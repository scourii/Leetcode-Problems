public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int startIndex = 0;
        var result = new List<int>();
        for (int i = 1; i < s.Length; i++)
        {
            int index = s.IndexOf(s[i], startIndex, i - startIndex);
            if (index == -1) continue;
            result.Add(i - startIndex);
            startIndex = index + 1;
        }
        return result.Append(s.Length - startIndex).Max();
    }
}
