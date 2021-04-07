public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        // If there are no items in the array, return nothing.
        if (strs.Length == 0){
            return "";
        }
        StringBuilder Prefix = new StringBuilder(strs[0]);
        // Splits all the strings in strs to IndividualString.
        foreach (String IndividualString in strs)
        {   
            // This makes the Length value for Prefix the same as IndividualString if it is greater than it.
            if (Prefix.Length > IndividualString.Length){
                Prefix.Length = IndividualString.Length;
            }
            // For everytime i is less than the Length of Prefix, add one.
            for (int i = 0; i < Prefix.Length; i++)
            {
                // If the value of i from both don't equal each other, makes Prefix's length equal to i.
                if (IndividualString[i] != Prefix[i]){
                    Prefix.Length = i;
                    break;
                }
            }
        }
        return Prefix.ToString();    
    }
}
