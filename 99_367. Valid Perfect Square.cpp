// 367. Valid Perfect Square
class Solution {
public:
    bool isPerfectSquare(int num) {

        int s=0,e=num;
        long long mid;

        while(s<=e)
        {   mid= s +(e-s)/2;
             int long long squre=mid*mid;
            if(squre==num)
            {
                return true;
            }
            if(squre <num)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
        
    }
};
