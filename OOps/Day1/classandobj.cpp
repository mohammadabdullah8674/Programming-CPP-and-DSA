#include <iostream>
using namespace std;


// Class definition
class Car {
public:
    // Member variables
    int speed;
    string model;

    // Member function to set speed
    void setSpeed(int s) {
        speed = s;
    }

    // Member function to display information
    void displayInfo() {
        cout << "Model: " << model << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Creating objects of the Car class
    Car car1;
    Car car2;

    // Setting values for the objects
    car1.model = "Sedan";
    car1.setSpeed(120);

    car2.model = "SUV";
    car2.setSpeed(150);

    // Displaying information about the cars
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}

