
// 442. Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {

        // first approach  using sort method 
        
       /* vector<int> ans;
        sort(arr.begin(),arr.end());
        int i=0,j=1;

        for(int i=0; i<arr.size()-1;i++)
        {
            if(arr[i]==arr[j])
            {
                 ans.push_back(arr[i]);
            }
            j++;
        }

     return ans;*/



    // 2 nd approach using map 

     unordered_map<int, int> mp;
     vector<int> ans ;
     

     for( auto i : arr) 
     {
         mp[i]++;

         if(mp[i]>1)
         {
             ans.push_back(i);

         } 
     }
         return ans;

     




    }
};
