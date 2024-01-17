
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

