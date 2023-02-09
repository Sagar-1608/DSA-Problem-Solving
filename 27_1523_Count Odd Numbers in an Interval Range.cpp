//1523. Count Odd Numbers in an Interval Range

class Solution {
public:
    int countOdds(int low, int high) {

        int n = high - low ;
        int p= low;
        int c=0;

        for ( int i = 0; i<=n ; i++)
        {
            if(p%2 != 0)
            {
                c++;
            }
            p++;
        }
        
        return c;
    }
};
