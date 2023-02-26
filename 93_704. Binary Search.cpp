// 704. Binary Search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1, mid;
        mid = s+(e-s)/2;
        while(s<=e){
            if(target == nums[mid]){
                return mid;
            }
            if(nums[mid]<target){
                    s = mid+1;
                }
            if(nums[mid] > target ){
                    e = mid-1;
                } 
            mid = s +(e-s)/2;
        }
        return -1;
    }
};
