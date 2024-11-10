#include <iostream>
#include <cmath>

double calculateY(double x) {
    return 2500 / (2 * std::pow(x, 2) + 3.7);
}

int main() {
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    double y = calculateY(x);
    std::cout << "The value of y is: " << y << std::endl;

    return 0;
}