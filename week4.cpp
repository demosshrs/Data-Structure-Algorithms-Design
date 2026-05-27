#include <iostream>
using namespace std;

int main() {
    // Create a 2D array (multidimensional array)
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print the array using two for loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}