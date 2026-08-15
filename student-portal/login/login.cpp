#include <iostream>
#include <string>

bool login(std::string username, std::string password) {
    if (username == "admin" && password == "1234") {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::cout << "Login module loaded" << std::endl;
    return 0;
}