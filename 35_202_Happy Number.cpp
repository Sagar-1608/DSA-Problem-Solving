// 202. Happy Number

class Solution {
public:
int sum_of_sqre( int a)
      {
          int ans =0;
          while(a!=0)
          {
              ans=ans + pow(a%10,2);
              a=a/10;


          }
          return ans;
      }

    bool isHappy(int n) {


      
       int ans = 0;
        while(n)
        {
            n= sum_of_sqre(n);
            if(n==1)
            {
                return true;
            }
           
        if(n%10 == 5)
                return false;
            
        }
        return false;
    }
};
