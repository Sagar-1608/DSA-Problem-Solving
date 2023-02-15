// 1678. Goal Parser Interpretation

class Solution {
public:
    string interpret(string s) {

        string ans="";
        
        int i=0;

     while( i<s.length())
     {
         if(s[i]=='G')
         {
             ans=ans +"G";
             
         }
         else if(s[i]==')')
         {
             if(s[i-1]=='(')
             {
                 ans=ans+"o";
                
             }
             if(s[i-1]=='l')
             {
                 ans=ans+"al";
                 
             }
         }
         i++;

     }
     return ans ;

        
    }
};
