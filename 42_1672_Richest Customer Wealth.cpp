// 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {

        int maxi= INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for ( int j=0; j<arr[0].size();j++)
            {
                sum=sum+arr[i][j];

            }
            if(sum>maxi)
            {
                maxi=sum;
            }
        }

        return maxi;
        
    }
};
