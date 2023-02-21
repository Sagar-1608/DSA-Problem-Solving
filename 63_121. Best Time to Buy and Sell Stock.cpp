// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        int mini=INT_MAX;


        for(auto i :arr)
        {
            ans = max(ans , i-mini);
            mini=min(i,mini);
        }
         
         return ans;
    }
};
