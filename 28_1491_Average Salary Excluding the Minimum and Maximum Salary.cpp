//1491 Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        double sum=0;
      
        for(int i = 1; i< arr.size()-1; i++)
        {

            sum = sum + arr[i];
        }
        
        

        return double(sum/(arr.size()-2));
        
    }
};



// with out using sort method 
class Solution {
public:
    double average(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        double sum=0;
        for(int i = 1; i< arr.size()-1; i++)
        {

            sum = sum + arr[i];
        }
        
        

        return double(sum/(arr.size()-2));
        
    }
};
