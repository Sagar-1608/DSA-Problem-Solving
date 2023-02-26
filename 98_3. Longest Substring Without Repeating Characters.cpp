// 3. Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        
    //     unordered_map<char, int> mp;
    //     //mp[s[0]]++;
    //     int c= 0;

    //  //bool t =true;

    //     for(int i = 0; i<s.length(); i++)
    //     {
    //         if(mp[s[i]]==1)
    //         {
    //             int n =mp.size();
    //             c = max (c,n);
    //             mp.clear();
    //             // t=false;
    //         }
            
            
    //         mp[s[i]]++;

    //     }
    //     int p=mp.size();
    //      c= max(c,p);

    //     //if(t==true ) return mp.size();

    //  return c;


     vector <int>  values (256,-1);
     int maxlen =0, start =-1;
        
        for(int i = 0; i< s.length(); i++)
        {
            if(values[s[i]]>start)
              start = values[s[i]];
            values[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};
