#include <iostream>
#include <string>

void displayHeader() {
    std::cout << "==Student Portal==" << std::endl;
}

void displayMenu() {
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Register" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

int main() {
    displayHeader();
    displayMenu();
    return 0;
}