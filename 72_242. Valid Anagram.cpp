// 242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()<t.size()  || t.size()<s.size() )
        {
            return false ;
        }
        else{
        
        map<char , int > s1, t1;
        for(int i= 0 ; i<s.size() ; i++){
             s1[s[i]]++;
             t1[t[i]]++;
        }
        // for(auto itr=s1.begin() ,itr2=t1.begin() ;itr!=s1.end() && itr!=t1.end();itr++, itr2++)
        // { 

        //     if(itr->second!=itr2->second || itr->first!=itr2->first)
        //     {
        //         return false ;
        //     }
        // }
        for(auto i1:s1)
        {
             if(i1.second!=t1[i1.first])
            {
                return false ;
            }
        }
        return true;
        }

    }
};
