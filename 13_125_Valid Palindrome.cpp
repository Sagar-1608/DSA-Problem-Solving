// 125. Valid Palindrome

class Solution {
    private:
    bool validChar( char ch )
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')|| (ch>='0' && ch<='9'))
            return 1;
        else 
            return 0;
    }
    
    char tolower (char ch)
{
    if((ch>= 'a' && ch <='z') ||  (ch>= '0' && ch <='9') )
    {
        return ch;
    }
    else 
    {
        char temp =ch -'A'+'a';
        return temp;
    }
}
    
    bool checkPalindrome(string st)
{
    int s =0, e=st.length()-1;
    
    while (s<=e)
    {
        
    if( st[s]!=st[e])
        {
            return 0 ;
        }
        else 
        {
            s++;
            e--;
        }
    }
        
    return 1 ;
    
    
  
}
    
public:
    bool isPalindrome(string s) {
        //removing other than alfanumaric
        int n = s.size();
        string temp="";
  
        
        for(int i=0; i<n ;i++)
        {
            if(validChar(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        
        // convert into lower case 
        
        for(int i=0; i<temp.size() ;i++)
        {
            temp[i]=tolower(temp[i]);
        }
        
        // cheaking palindrome
        return checkPalindrome(temp);
        
        
    }
};
