#include <iostream>
using namespace std;

class EmptyClass {
};

int main() {
    EmptyClass obj;
    cout << "Size of EmptyClass object: " << sizeof(obj) << " bytes" << endl;

    return 0;
}
