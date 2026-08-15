#include <iostream>
#include <string>

int mult(int a, int b) {
    return a * b;
}
int define_grade(int a) {
    if (a >= 50) {
        return 1;
    } else if (a < 50 && a >= 30) {
        return 2;
    } else {
        return 3;
    }
}

void tell_score(int n) {
    std::cout << "Result score: , " << n << std::endl;
}