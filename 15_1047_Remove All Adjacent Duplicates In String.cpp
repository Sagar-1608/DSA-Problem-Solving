//1047. Remove All Adjacent Duplicates In String
class Solution {
public:
    string removeDuplicates(string s) {
        
        if(s.length()<=1)
        {
            return s;
        }
        
        string one;
    
      one.push_back(s[0]);
    
        for(int i=1;i<s.length();i++)
       {
        one.push_back(s[i]);
        if(one.length()>=2 && (one[one.length()-1]==one[one.length()-2]))
        {
            one.pop_back();
            one.pop_back();
        }
        
        
    }
    
    return one;
    }
};
