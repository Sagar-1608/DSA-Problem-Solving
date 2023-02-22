// 2485. Find the Pivot Integer

class Solution {
public:
    int pivotInteger(int n) {
        int total = n*(n+1)/2;
        

        for (int i =1; i<=n; i++)
        {
            int v= i*(i+1)/2;

            if(v==total-v+i)
            {
                return i;
            }
           

        }
        return -1;      
    }
};
