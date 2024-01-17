#include <bits/stdc++.h>
using namespace std;
class Room {
    public:   // access modifier --> iske niche ke data publicly available hai koi bhi access kar skta hai
        double length;
        double breadth;
        double height;   

        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};


// sample function
void sampleFunction() {
    // create objects
    Room room1, room2;
}

int main(){
    // create objects 
    Room room3, room4;

    return 0;
}