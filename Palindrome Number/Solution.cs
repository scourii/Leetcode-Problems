public class Solution {
    public bool IsPalindrome(int x) {
        if (x<0) return false; // Negative numbers cannot equal since the negative signs will be moved in front of the number.
        
        List<int> NumberList = new List<int>(); // Creates new int list named NumberList
        while(x>0){
            NumberList.Add(x%10); // Adds the remainder of x / 10 to the list while true.
            x /= 10; // Then divides the number by 10. 
        }
        int Solution = 0; // Sets new variable called Solution to 0.
        int PlaceInList = NumberList.Count-1; // The amount of numbers in NumberList - 1.

        while(PlaceInList < Solution){
            if (NumberList[Solution++] != NumberList[PlaceInList--])
                return false;
        }
        return true;
    }
}
