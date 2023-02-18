// 1603. Design Parking System

class ParkingSystem {
public: 

// approach 1  using 3 int 
// int low,med,high;

//     ParkingSystem(int big, int medium, int small) {
//         low = small;
//         med=medium;
//         high=big;
        
//     }
    
//     bool addCar(int carType) {

//         if(carType==1 && high==0 || carType==2 && med==0 || carType==3 && low==0) return false;

//         if(carType == 1) high--;
//         if(carType == 2) med--;
//         if(carType == 3) low--;
//         return true;
        
//     }



    // approavh 2 using array 

    vector <int > arr;
     ParkingSystem(int big, int medium, int small) {
        arr={big, medium, small};
        
    }
    
    bool addCar(int carType) {

        return (arr[carType-1]--)>0;
        
    }




};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
