//976. Largest Perimeter Triangle

class Solution {
public:
    int largestPerimeter(vector<int>& arr) {

//   int maxi =0;
//   int n= arr.size();
//   for(int i=0; i<n-2;i++)
//   {
//       for(int j =i+1;j<n-1; j++)
//       {
//           for(int k=j+1; k<n ; k++)
//           {
//               int a = arr[i];
//               int b = arr[j];
//               int c = arr[k];

//               if(a< (b+c) && b<(a+c) && c<(a+b))
//               {
//                   maxi= max(maxi,(a+b+c));
//               }
//           }
//       }
//   }

// return maxi;
// above code give output but goes in TLE 


sort(arr.begin(), arr.end(), greater<int>());

int maxi = 0;

for (int i = 0; i <arr.size()-2; i++)
{
    if(arr[i]< (arr[i+1]+arr[i+2]))
    {
        maxi = max(maxi, (arr[i]+arr[i+1]+ arr[i+2]));
        break;
    }
}
 return maxi;

        
    }
};


