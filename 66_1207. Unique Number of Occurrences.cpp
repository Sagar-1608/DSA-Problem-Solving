// 1207. Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        // first approch using vector 
       /* vector <int> p;
        int i=0;
        sort(arr.begin(),arr.end());
            
        
        while(i<arr.size())
        {
            int count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
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
        return true;*/
        
        
    /// second approch by using map and set 
    unordered_map<int ,int> ump;
    unordered_set<int> st;

    for(auto i :arr) ump[i]++;
    for(auto i : ump) st.insert(i.second);

    if (ump.size()==st.size()) return true;
    else return false ;

    


    }
};
