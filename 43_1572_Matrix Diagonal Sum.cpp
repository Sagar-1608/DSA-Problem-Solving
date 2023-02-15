// 1572. Matrix Diagonal Sum


class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {

        // int n = arr.size();
        // int sump = 0;
        // int sums = 0;
        // int sum =0;

        // if(n%2!=0)
        // {
        //     for(int i = 0; i<n; i++)
        //     {
        //         sump =sump +arr[i][i];
        //         sums= sums + arr[i][n-i-1];
        //     }

        //     sum= sump + sums - arr[n/2][n/2];
        // }

        // else
        // {

        //      for(int i = 0; i<n; i++)
        //     {
        //         sump =sump +arr[i][i];
        //         sums= sums + arr[i][n-i-1];
        //     }

        //     sum= sump + sums ;


        // }

        // return sum;

        // same as above but it shot cut 

int sum =0;
int n = arr.size();

for (int i=0; i<n ;i++)
{
    sum = sum + arr[i][i] + arr[i][n-i-1];
}

if(n%2!=0) (sum=sum -arr[n/2][n/2]);

return sum;

        
    }
};



