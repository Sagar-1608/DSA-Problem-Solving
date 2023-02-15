// 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {

        // approch 1 by using sort method 
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // int i=0;
        // while(i<s.length())
        // {
        //     if(s[i]!=t[i]){

        //         return t[i];
        //     }
        //     i++;
        // }
        // return t[t.length()-1];

        
        


        int n = s.length();
        int diff=0;

        for(int i=0 ; i<n; i++)
        {
            diff  = diff + int((t[i]-s[i]));
        }
        diff +=int(t[n]);
        return char(diff);


        
    }
};
