//443. String Compression
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int initial=0;
    
        int n = chars.size();
        while(i<n)
        {
            int j =i+1;
            while (j <n && chars[i]==chars[j])
            {
                j++;
            }
            chars[initial++]= chars[i];
            
            int count= j-i;
            
            if(count>1)
            {
              string c= to_string(count);
                for(char ch :c)
                {
                    chars[initial++]=ch;
                }
            }
            i=j;
        }
        
        return initial;
    }
};
