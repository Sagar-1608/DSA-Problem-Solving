// 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& arr) {

        // sort(arr.begin(),arr.end());
        // with ot sort we can solve this question below 
        double sum=0;
        int mini=INT_MAX;
        int mxi=INT_MIN;
        for(int i = 0; i< arr.size(); i++)
        {

            sum = sum + arr[i];
            mini = min(mini,arr[i]);
            mxi = max(mxi,arr[i]);

        }
        sum=sum-mini-mxi;
        
        

        return double(sum/(arr.size()-2));
        
    }
};
