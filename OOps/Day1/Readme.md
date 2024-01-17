# Class and Objects in C++ Day 1

## Class :
Class ek blueprint ya template hota hai jo ek ya ek se zyada objects ko create karne mein madad karta hai. Jaise ki ek ghar ka blueprint bataata hai ki ghar kaise bana hoga, waise hi class bhi bataati hai ki object kaise bana jaayega.

`A class is a blueprint for the object.
We can think of a class as a sketch (prototype) of a house. It contains all the details about the floors, doors, windows, etc. Based on these descriptions we build the house. House is the object.
`
``` cpp
class className {
   // some data
   // some functions
};
```

##### implementation :
``` cpp
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
```
## Objects

Object ek class ka instance hota hai, yaani class ke blueprint ke adhar par banaya gaya ek specific item. Jaise ki ek ghar ka blueprint se bahut saare ghar banaye ja sakte hain, waise hi ek class se bahut saare objects banaye ja sakte hain.

`When a class is defined, only the specification for the object is defined; no memory or storage is allocated.
To use the data and access functions defined in the class, we need to create objects.`

- syntax for objects 
  
``` cpp
className objectVariableName;
```
- object implementation
  
```cpp
// sample function
void sampleFunction() {
    // create objects
    Room room1, room2;
}

int main(){
    // create objects 
    Room room3, room4;
}
```

Here, two objects *room1* and *room2* of the Room class are created in *sampleFunction()*. Similarly, the objects room3 and room4 are created in *main()*.

As we can see, we can create objects of a class in any function of the program. We can also create objects of a class within the class itself, or in other classes.

Also, we can create as many objects as we want from a single class.


###### Example :

Mann lo, hum ek class bana rahe hain jiska naam "Car" hai:
```cpp
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
```
Ab hum is class ka istemaal karke objects bana sakte hain:

```cpp
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
```
Is example mein, Car class ek blueprint hai jisme "speed" aur "model" jaise member variables aur "setSpeed" aur "displayInfo" jaise member functions hain. Fir, main function mein humne Car class ke do objects create kiye (car1 aur car2) aur unko alag-alag values di hain. Finally, humne information display kiya.

### Size of class:

bina object banaye class space nahi leti. Class ka space tabhi allocate hota hai jab aap us class ka object banate hain. Class ek blueprint or template hoti hai, jab tak aap us blueprint se actual object create nahi karte, tab tak memory allocate nahi hoti.

Yadi aapne sirf class definition likhi hai, lekin koi object nahi banaya hai, toh us class ke liye memory allocate nahi hoti. Memory allocation object creation ke samay hoti hai jab aap new operator ka istemal karte hain (dynamic memory allocation) ya fir stack par object banate hain (automatic memory allocation).

### Size of objects:

Object ki size calculation mein kuch important concepts hote hain. Yeh concepts depend karte hain ki compiler kis tarah ka memory layout use karta hai. Yahan kuch key concepts hain:

- Padding (Alignment): Compiler, memory ko efficient taur par access karne ke liye objects ke beech mein padding add kar sakta hai. Padding ka mtlb hai ki kuch extra bytes, object ke size ko multiple banane ke liye add kiye jaate hain. Yeh alignment ke liye hota hai, taki CPU efficiently memory access kar sake.

- Data Type Alignment: Har data type ka apna alignment hota hai. For example, ek int ki size 4 bytes hoti hai aur uski alignment bhi 4 bytes hoti hai. Agar aap structure mein ek int ke baad doosre data type ko add karte hain, toh compiler padding add karke alignment maintain karega.

- Sizeof Operator: sizeof operator ka use object ki size janane ke liye hota hai. Yeh compiler ke padding aur alignment policies ke hisab se size calculate karta hai.

- Bit-fields: C++ allows the creation of bit-fields within a structure. Bit-fields are used to allocate specific number of bits for each member variable, which can affect the overall size of the structure.

```cpp
#include <iostream>
using namespace std;

class Example {
public:
    char c;
    int i;
    double d;
};

int main() {
    Example obj;
    cout << "Size of Example object: " << sizeof(obj) << " bytes" << endl;

    return 0;
}
```

###### bina member ke class ka object ka size kitna hoga

Bina kisi member ke class ka object ka size 1 byte hota hai. Compiler ek empty class ke liye bhi minimum ek byte ka memory allocate karta hai. Yeh ek tarah ka placeholder hota hai, taki har class ka object ki size kam se kam 1 byte ho.

```cpp
#include <iostream>
using namespace std;

class EmptyClass {
};

int main() {
    EmptyClass obj;
    cout << "Size of EmptyClass object: " << sizeof(obj) << " bytes" << endl;

    return 0;
}
```
###### Q: kyu leta hai 1 byte 


1 byte ka size empty class ke liye liya jata hai kyunki C++ standard mein minimum object size 1 byte define kiya gaya hai. Yeh ek convention hai aur C++ compilers is standard ko follow karte hain.

Empty class ka object create karne par bhi memory allocate karni hoti hai, taki object ke liye ek unique address mil sake. Is 1-byte size ka object compiler ke internal representation ke liye hota hai, jise woh track kar sake.

C++ standard ne minimum object size ko 1 byte rakha hai, lekin iska practical implementation compiler par depend karta hai. Kuch compilers internally slightly larger sizes bhi use kar sakte hain, lekin yeh unki design aur optimization policies par depend karta hai.


[padding pr or padhne ke liye is link pe jaye](https://www.includehelp.com/cpp-tutorial/size-of-a-class-in-cpp-padding-alignment-in-class-size-of-derived-class.aspx)

##### size pe kuchh examples

###### Ex 1:


```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    int a;
    int b; 
    int c;
};

int main() {
    A obj;
    cout << "Size of int a : " << sizeof(obj.a) << endl;
    cout << "Size of int obj : " << sizeof(obj) << endl;
    //  4+4+4 = 12
    return 0;
}
// Output-->
// Size of int a : 4
// Size of int obj : 12
``` 
###### Ex 2:

```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    int a;
    char b; 
    int c;
};

int main() {
    A obj;
    cout << "Size of char b : " << sizeof(obj.b) << endl;
    cout << "Size of int obj : " << sizeof(obj) << endl;
    //  4+1+4 = 9 
    return 0;
}
// Output-->
// Size of char b : 1
// Size of int obj : 12

//    aaaabpppcccc  --->  p for padding
```

###### Ex 3:

```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    char a; 
    int b;
    double c;
};

int main() {
    A obj;
    cout << "Size of double c : " << sizeof(obj.c) << endl;
    cout << "Size of int obj : " << sizeof(obj) << endl;
   
    return 0;
}
// Output-->
// Size of double c : 8
// Size of int obj : 16

//    apppbbbbcccccccc  --->  p for padding

```

###### Ex 4:

```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    char a; 
    char b;
    double c;
};

int main() {
    A obj;
    cout << "Size of int obj : " << sizeof(obj) << endl;
   
}
// Output-->
// Size of int obj : 16

//    abppppppcccccccc  --->  p for padding

```
###### Ex 5:

```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    char a; 
    int b;
    char c;
    double d;
};

int main() {
    A obj;
    cout << "Size of int obj : " << sizeof(obj) << endl;
   
}
// Output-->
// Size of int obj : 24


//    apppbbbbcppppppppdddddddd  --->  p for padding

```

## Static and Dynamic memory allocation

ab tak ham log jis tarah se object bnate the wo static memory allocate hota tha ---- (memory : Stack or heap hota hai) -----
is tarah se wo stack me memory allocate hota hai

agar hame dynamic memory allocate karna hai to ham jaise pointer me allocate karte the waise karna hoga to hame heap me memory allocate hoga

```cpp
int *p = new int
```
to class or object me aise hoga 

```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    char a; 
    int b;
   
};

int main() {
    A *obj = new A;
   (*obj).a = 'A';
    (*obj).b = 15;
    cout << "This is pointer object it stores address : " << obj << endl;
    cout << "we will access the members like this  : " << (*obj).a << endl;
    cout << "we will access the members like this  : " << (*obj).b << endl;
   
}
// output ---->
// This is pointer object it stores address : 0x150beb0
// we will access the members like this  : A
// we will access the members like this  : 15

```

is tarah se bhi access hojata hai pointer 
```cpp
#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    char a; 
    int b;
   
};

int main() {
    A *obj = new A;
    obj->a = 'A';
    obj->b = 15;
    cout << "This is pointer object it stores address : " << obj << endl;
    cout << "we will access the members like this  : " << obj->a << endl;
    cout << "we will access the members like this  : " << obj->b << endl;
   
}
```