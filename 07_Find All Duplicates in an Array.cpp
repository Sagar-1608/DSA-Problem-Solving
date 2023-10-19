// 	Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        
        vector <int> temp;
        int i=0; 
        sort(arr.begin(),arr.end());
        while(i<arr.size()-1)
        {
            if(arr[i]==arr[i+1])
            {
                temp.push_back(arr[i]);
                i+=2;
                
            }
            else
            {
                i+=1;
            }
        }
        return temp;
    }
};
