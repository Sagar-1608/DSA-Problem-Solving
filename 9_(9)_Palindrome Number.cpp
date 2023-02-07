// 9. Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        
            
        
        long long res=0;
        long long ans =x;
        if(x<0)
        {
            return false;
        }
      while(x!=0){
          int n=x%10;
          res=res*10+n;
          x=x/10;
      }  
        if(ans==res){
            return true;
        }
        else{
            return false;
        }
        
    }
};
