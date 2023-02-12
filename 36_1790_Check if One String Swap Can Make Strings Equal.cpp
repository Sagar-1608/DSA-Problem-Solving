// 1790. Check if One String Swap Can Make Strings Equal
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        string a = s1;
        string b = s2;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a!=b) return false;

       


        for(int i =0; i<s1.length(); i++)
        {
             if(s1[i]!=s2[i])
             {
               c++;

             }
             
            

        }

      
        if(c==0 || c==2) return true;

       return false;
        
    }
};
