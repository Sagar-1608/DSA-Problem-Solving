// 953. Verifying an Alien Dictionary
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        map<char,int> m;

// include all oreder element in map it give out as 
//a : index(a)
//b : index(b) and so on

        for(int i=0; i<order.size(); i++){ 

            m[order[i]]=i;
        }


// cheaking one by one element 
        for(int i=1; i<words.size(); i++){
            string w1=words[i-1];  
            string w2=words[i];

            // chiking the order of given two element 

            for(int i=0; i<w1.size(); i++){
                if(m[w1[i]]<m[w2[i]]){break;}  //ans found
                if(i>=w2.size()){return false;} // word1 > word2
                if(m[w1[i]]>m[w2[i]]){return false;} // order mismatch
            }
        }
        return true;
        
    }
};
