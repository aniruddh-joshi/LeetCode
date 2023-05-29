class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        //initialize the number of slot for each parking space
        slots[1]=big;
        slots[2]=medium;
        slots[3]=small;
    }
    
    bool addCar(int carType) {
        if(slots[carType] > 0){
            slots[carType]--;
            return true;
        }
        else{
            return false;
        }
    }
private:
    unordered_map<int,int>slots;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
