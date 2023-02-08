class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        
        double median  ;
        int i=0;
        int j=0;
        int k=0;
        int m=a.size();
        int n=b.size();
        int arr[m+n];
        
        while (i<m && j<n)
        {
            if(a[i]<b[j])
            {
                arr[k++]= a[i];
                i++;
            }
            else
            {
              arr[k++]= b[j];
                j++;   
            }
        }
        
         while (i<m )
        {
            
                arr[k++]= a[i];
                i++;
           
        }
         while ( j<n)
        {
           
              arr[k++]= b[j];
                j++;   
            
        }
        
        if( (m+n)%2 == 0)
        {
            median = double(arr[(m+n)/2 -1] + arr[(m+n)/2])/2;
        }
        else 
        {
            median = (arr[(m+n)/2]);
        }
        
        
    return median;
        
        
        
    }
};
