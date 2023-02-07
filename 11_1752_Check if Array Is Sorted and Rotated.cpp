//
class Solution {
public:
    bool check(vector<int>& arr) {
        int pair =0;
        int n = arr.size();
        for(int i=1; i<n;i++)
        {
            if(arr[i-1]>arr[i])
             pair++;
        }
        
        if(arr[n-1]>arr[0])   /// cheaking last element is greater than first element
            pair++;
        
        return pair<=1;  /// this statement return true if pair is less than or equal to else return false ;
        
    }
};
