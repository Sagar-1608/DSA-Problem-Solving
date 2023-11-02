// 496. Next Greater Element I

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {

       vector<int> ans ;
        for (int i =0 ; i<n1.size(); i++)
        {
            int ind=0;
            for (int j=0; j< n2.size()  ; j++)
            {
                if(n1[i]==n2[j])
                {
                    ind=j;
                }

                
                
            }
            int ind2=0;
            for(int p =ind+1; p<n2.size();p++)
            {
                if(n1[i]<n2[p])
                {
                      ind2=p;
                    break;
                }
            }

        if( ind2==0) ans.push_back(-1);
        else ans.push_back(n2[ind2]);
        }
        
        return ans;
    }
};
