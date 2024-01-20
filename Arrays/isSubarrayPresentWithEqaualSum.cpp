#include <iostream>
using namespace std;

void PrintSubarrays(int arr[], int n){
    // cout << "1 size subarays:\n";
    // for(int i=0; i<n; i++){
    //     cout << "[" << arr[i] << "], ";
    // }cout <<  endl;
    // cout << "2 size subarays:\n";
    // for(int i=1; i<n; i++){
    //     cout << "[" << arr[i-1] << ", " << arr[i] << "], ";
    // }cout <<  endl;

  
    for (int size = 1; size <= n; ++size)
    {
        for (int i = 0; i <= n - size; ++i)
        {
            for (int j = i; j < i + size; ++j)
            {
                cout << arr[j] << " ";
            }

            cout << endl;
        }
    }
}

// Function to check if a subarray with equal sum exists
int isSubarrayPresentWithEqualSum(int arr[], int n) {
    int totalSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int prefixSum = 0;

    // Traverse the array and check for each prefix sum if a subarray with equal sum exists
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // Calculate the suffix sum for the current prefix sum
        int suffixSum = totalSum - prefixSum;

        // If the prefix sum is equal to the suffix sum, a subarray with equal sum is found
        if (prefixSum == suffixSum) {
            return 1; // Subarray with equal sum found
        }
    }

    return 0; // No subarray with equal sum found



    // brutforce approach
    // for(int i=0; i<n; i++){
    //     int prefix=0;
    //     for(int j=0; j<=i; j++){
    //         prefix += arr[j];
    //     }
    //     int suffix=0;
    //     for(int j=i+1; j<n; j++){
    //         suffix += arr[j];
    //     }
    //     if(prefix == suffix)
    //         return 1;
    // }
    // return 0;
}

int main() {
    // Write C++ code here
    cout << "Welcome to Coding Ninjas Studio Online Compiler!!\n";
    // int arr[] ={3,4,-2,5,8,20,-10,8};
    // int n = 8;
    // PrintSubarrays(arr, n);
    int arr[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
     // Check if a subarray with equal sum exists
    if (isSubarrayPresentWithEqualSum(arr, n)) {
        cout << "Subarray with equal sum exists." << endl;
    } else {
        cout << "No subarray with equal sum." << endl;
    }

    
    
    return 0;
}
