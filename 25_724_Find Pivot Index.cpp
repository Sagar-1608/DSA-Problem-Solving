//724. Find Pivot Index
class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        
        int leftsum = 0, rightsum=0;
        int n =arr.size();
        
        for (int i = 0 ; i<n;i++)
        {
            rightsum+= arr[i];
            
        }
        
        for(int i = 0; i < arr.size(); i++){
            rightsum -= arr[i];
            if(rightsum == leftsum ) return i;
            leftsum+= arr[i];
        }
        return -1;
        
        
    }
};
