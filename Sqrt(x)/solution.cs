public class Solution {
    public int MySqrt(int x) {
        
        if(x<2) return x;
        
        int start = 2, last = x / 2;
        
        while (start<=last)
        {
            int pivot = start + (last-start)/2;
            
            long square = (long)pivot*pivot;
            
            if (square>x) last = pivot-1;
            else if (square<x) start = pivot+1;
            else return pivot;
        }
        return last;
        
    }
}
