// 566. Reshape the Matrix


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& arr, int r, int c) {
    // approch 1 using queue as extra space
        
     /*  vector<vector<int>> ans(r,vector<int>(c));
        queue<int>q;

     if(arr.size()*arr[0].size() == r*c)
       {
           for(int i =0; i<arr.size(); i++)
          {
           for(int j =0; j<arr[0].size(); j++)
           {
               q.push(arr[i][j]);
           }
          }



 
       for(int i =0; i<r; i++)
        {
           for(int j =0; j<c; j++)
           {
               ans[i][j]=q.front();
               q.pop();
           }
       

          }
    return ans;
       
    }
    return arr;*/


    // approch 2 with out extra spsce 

    vector<vector<int>> ans(r,vector<int>(c));

    if(arr.size()*arr[0].size()==r*c)
    {
        for (int i=0 ; i< r*c; i++) //1*4=4
        {
            ans[i/c][i%c]=arr[i/arr[0].size()][i%arr[0].size()];
//           convert into reshape 

        }

        return ans ;
    }
return arr;


    }
};
