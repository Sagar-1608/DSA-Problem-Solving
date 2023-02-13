class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int sum =0;
        for(int i=0; i<arr.size();i++)
        {
            int left = (i+1);
            int right = (arr.size()-i);
            int total= left*right;
            int odd = (total+1)/2;
            sum= sum+ odd*(arr[i]);
        }
        return sum;


        // approch 
        // [1,2,3,4,5]
        // for 3 i=2;
        // left =[3],[2,3],[1,2,3] =(i+1)=2+1=3
        // right= [3,4], [3,4,5] and hole [1,2,3,4,5] =(n-i) = 5-2=3
        // total = left*right= 3*3=9
        // in this 
        // odd length arr= (total +1)/2 = (10/2)=5

        // sum= sum + odd*arr[i]


    }
};
