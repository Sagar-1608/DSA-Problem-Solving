//1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& arr) {
        long long pro=1;

        for(int i=0 ;i<arr.size(); i++)
        {
            int val=0;
           if(arr[i]>0) val=1;
           else if(arr[i]<0) val =-1;
        //    else val=0;

           pro =pro*val;
            
        }

        return pro;
        
    }
};
