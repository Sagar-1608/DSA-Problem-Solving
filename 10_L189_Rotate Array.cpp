//189 rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n= nums.size();
        vector<int> temp(n);
        
        for(int i=0; i<nums.size();i++)
        {
            temp[(i+k)%n]=nums[i];   //store in temp
        }
     nums=temp;   
    }
};
