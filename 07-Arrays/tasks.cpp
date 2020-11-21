#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// int[] readArrayInput(const unsigned n);
// void printArrayElements(int arr[], unsigned);

int main() {

    #ifdef task1

    // unsigned n;
    // cin >> n;
    // printArrayElements(readArrayInput(n), n);

    #endif
    int matrix[5][3] = {{0},};

    matrix[100000000][5] = 5;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

// int[] readArrayInput(const unsigned n) {

//     int array[n];
//     for(unsigned i = 0; i < n; i++) {
//         cin >> array[i];
//     }

//     return array;
// }

// void printArrayElements(int arr[], unsigned n) {
//     for(unsigned i = 0; i < n; i++) {
//         cout << arr[i] << endl;
//     }

// }