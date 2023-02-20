// 1. Two Sum


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    // int n = nums.size();
    // vector<int> ans;
    //     for(int i=0; i<n;i++)
    //     {
    //         for(int j=i+1; j<n;j++)
    //         {
    //             if((nums[i]+nums[j])==target)
    //             {
    //                 ans.push_back(i);
    //                 ans.push_back(j);

    //             }
    //         }
    //     }
    //     return ans;






    

        // by using map and o(n) complexity

        unordered_map <int ,int > m;
        m[nums[0]]=0;


        for(int i= 1; i<nums.size(); i++)
        {
            auto it = m.find((target- nums[i]));
            if(it!=m.end()) return {it->second ,i};
            m[nums[i]]=i;

        }
        return {};


        
    }
};
