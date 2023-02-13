// 1232. Check If It Is a Straight Line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {

       
        int x0 = arr[0][0], x1=arr[1][0];
        int y0 = arr[0][1], y1= arr[1][1];
        int dx= x1-x0;
        int dy= y1-y0;

        for(int i =0; i< arr.size() ; i++)
        {
           int x= arr[i][0] , y = arr[i][1];
           
            if(dy*(x-x0)!=dx*(y-y0))  //not linear point condition
            {
              return false;
            }


        }
        return true;



        
    }
};
