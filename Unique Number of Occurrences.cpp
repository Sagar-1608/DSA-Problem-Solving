// 	Unique Number of Occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <int> p;
        int i=0;
        sort(arr.begin(),arr.end());
            
        
        while(i<arr.size())
        {
            int count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]==arr[i])
                    count++;
                else
                    break;
            }
            p.push_back(count);
            i=i+count;
        }
        
        sort(p.begin(),p.end());
        for( i= 0 ; i<p.size()-1 ; i++)
        {
            if(p[i]==p[i+1])
            {
                return false;
            }
            
        }
         return true;
       
        

    }
};
