#include <iostream>

int main() {
    int x, y;
    std::cout << "Enter x and y: \n";
    std::cin >> x >> y;
    int sum = x + y;
    std::cout << "The sum of x and y is: " << sum << std::endl;
    return EXIT_SUCCESS;
}