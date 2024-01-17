#include <iostream>
using namespace std;


int binarySearch(int a[], int n, int key){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        int mid = start + (end - start)/2;
        cout << "a[mid] : " <<  a[mid] << endl;
        // jab a[mid] == key
        if(a[mid] == key){
            cout << "\nMil Gyaa \n";
            return mid;
        }
        //  jab a[mid] < key ---- right side jana hai
        else if(a[mid] < key){
            start = mid + 1;
        }
        //  jab a[mid] > key ---- left side jana hai
        else {
            end = mid - 1;
        }
    }
    cout << "Nahi mila yaar \n";
    return -1;
}

int main() {
    // Write C++ code here
    cout << "BINARY SEACRH\n";
    
    int a[] = {1,5,10,20,25,35,62};
    int n=7;
    int key = 35;
    cout << binarySearch(a,n,key);

    return 0;
}
