// 1779. Find Nearest Point That Has the Same X or Y Coordinate

class Solution {
  
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& arr) {
        
        
         int ans = -1;
         int mindis= INT_MAX;
         for(int i =0 ; i<arr.size();i++)
         {
             int a= arr[i][0], b= arr[i][1];
             if(x==a || y==b)
             {
                    int dis = abs(x-a) + abs(y-b);
                    if(dis<mindis)
                    {
                        mindis= dis;
                        ans=i;
                    }
             }
         }

      return ans;
    
    }  
    
};



