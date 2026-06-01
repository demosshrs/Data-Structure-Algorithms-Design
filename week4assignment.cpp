#include <iostream>
using namespace std;

double min(double array[], int size) {
    double smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest)
            smallest = array[i];
    }
    return smallest;
}

