// 217. Contains Duplicate


class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        // solution 1 using map

        // map<int , int > mp ;

        // for(int i =0; i<arr.size();i++){
        //     mp[arr[i]]++;
        // }

        // for(auto i=mp.begin(); i!=mp.end(); i++)
        // {
        //     if((i->second)>1)
        //     {
        //         return true;
        //     }
        // }
        // return false;




    //    solution 2 using set 

        // set<int> st(arr.begin(),arr.end());
        // if(st.size()<arr.size())  return true ;
        // return false;

        

         unordered_set<int> hset;
        // Traverse all the elements through the loop...

        for(int idx = 0; idx < arr.size(); idx++) {
            // Searches set. if present, it contains duplicate...
            if(hset.count(arr[idx]))
                return true;
            // insert nums[i] in set...
            hset.insert(arr[idx]);
        }
        return false;

        
    }
};
