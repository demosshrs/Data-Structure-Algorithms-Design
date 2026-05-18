#include <iostream>
using namespace std;


//Class Definition (Blueprint)
class Car {
    public:
    string brand; //attribute
    int speed;
    
    void accelerate() { //method
    speed +=10;
    cout << "Speed:" <<speed;
}
};
//Creating Objects (Instances)
int main(){
    Car myCar;
    myCar.brand="Toyota";
    myCar.speed=0;
    myCar.accelerate();
    
    Car anotherCar;
    return 0;
}