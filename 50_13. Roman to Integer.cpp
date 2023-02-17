//13. Roman to Integer


class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        unordered_map <char, int>um{
            
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
            
        };

        for(int i=0 ; i<s.size();i++)
        {
            if(um[s[i]]<um[s[i+1]]) //for 4 ,9 ,40,90 and so on 
            {
                ans=ans-um[s[i]];
            }
            else
            {
                ans=ans+um[s[i]];
                
            }

        }

        
        return ans;
        
    }
};
