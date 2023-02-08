// 204 Count Primes

class Solution {
public:
    int countPrimes(int n) {
        
        int count =0;
        vector<bool> prime(n+1 , true ); // all as prime 
            
        prime[0]=prime[1]=false; // markking 0 and 1 as not prime 
        
        for (int i =2 ; i<n ;i++)
        {
            if(prime[i])
            {
                count ++;
                for(int j= 2*i ; j<n ; j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
       return count;     
        
    }
};
