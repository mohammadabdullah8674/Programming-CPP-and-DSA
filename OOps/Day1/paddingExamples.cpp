// Ex 1:
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


// Ex 2:


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


// Ex 3:

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


// Ex 4:


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


// Ex 5:

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




