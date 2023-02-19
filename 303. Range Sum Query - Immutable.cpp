// 303. Range Sum Query - Immutable


class NumArray {
public:

    vector<int> ans;
    NumArray(vector<int>& arr) {

        for(int i = 0;i<arr.size();  i++)
        {
            ans.push_back(arr[i]);
        }

        
    }
    
    int sumRange(int left, int right) {
        int sum =0;
        for(int i = left; i<right+1; i++){
            sum = sum +ans[i];
        } 
        return sum;       
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
