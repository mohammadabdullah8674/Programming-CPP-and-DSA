
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


