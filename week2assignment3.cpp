#include <iostream>
using namespace std; //Demos

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    double score, highest = -1;
    for (int i = 1; i <= n; i++) {
        cout << "Enter score for student " << i << ": ";
        cin >> score;
        if (score > highest)
            highest = score;
    }
    cout << "Highest score: " << highest << endl;
    return 0;
}