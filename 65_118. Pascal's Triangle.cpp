// 118. Pascal's Triangle


class Solution {
public:
    vector<vector<int>> generate(int n) {
	vector<vector<int>> ans;
    for(int i=0; i<n; i++)
    {
        vector<int> temp (i+1,1); //fill all row as 1
        for(int j=1; j<i;j++ ) // from 1 to length of row add above + above_left elemrnt 
        {
            //1
            //1 1
            //1 2 1 
            //1 3 3 1
            //1 4 6 4 1
            temp[j]=ans[i-1][j]+ans[i-1][j-1];
        }
        ans.push_back(temp);
    }
	
	return ans;
}
};
