#include <iostream>
#include <string>

void displayHeader() {
    std::cout << "*** Welcome to MyApp ***" << std::endl;
}

void displayMenu() {
    std::cout << "[1] -> Login" << std::endl;
    std::cout << "[2] -> Register" << std::endl;
    std::cout << "[3] -> Quit" << std::endl;
}

int main() {
    displayHeader();
    displayMenu();
    return 0;
}