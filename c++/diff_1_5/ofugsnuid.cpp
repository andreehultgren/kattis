// Author:  Andree Hultgren
// Problem: Reverse
// Source:  https://open.kattis.com/problems/ofugsnuid

#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // Collect amount of numbers
    int n_numbers;
    cin >> n_numbers;

    // Allocate space for array
    int output_array [n_numbers];

    // Add array in reversed order
    for (int i = n_numbers-1 ; i >= 0 ; i--){
        cin >> output_array[i];
    }

    // Print the array
    for (int i = 0 ; i < n_numbers ; i++){
        cout << output_array[i] << endl;
    }

    return 0;
}
