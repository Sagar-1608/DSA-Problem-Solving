//Complement of Base 10 Integer
class Solution {
public:
    int bitwiseComplement(int n) {
        
        
        
            
            int m= n;
            int mask = 0;
        if (n==0)
        {
            return 1;        }
            
            while(n!=0)
            {
               
                mask= (mask<<1)|1;
                    
                n=n>>1;
            }
            
        int ans = (~m)&mask;
        return ans;
        
        
    }
};
