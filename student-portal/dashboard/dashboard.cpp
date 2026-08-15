#include <iostream>
#include <vector>
#include <string>

void showDashboard() {
    std::cout << "Dashboard loaded" << std::endl;
}

void showStats(int users, int sessions) {
    std::cout << "Users: " << users << std::endl;
    std::cout << "Sessions: " << sessions << std::endl;
}

int main() {
    showDashboard();
    return 0;
}