// 287. Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& arr) {

        unordered_map<int , int > mp;
        for(auto i : arr) mp[i]++;
        int duplicate =0;
        for(auto i:mp) if(i.second>1) duplicate =i.first;
        return duplicate;
        
        
    }
};
