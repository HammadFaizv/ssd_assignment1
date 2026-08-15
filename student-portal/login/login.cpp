#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    for(int i = 0; i<s; i++) {
        s[i] = s[i] - 1;
    }
}

bool login(std::string username, std::string password) {
    if (username == "admin" && password == "1234") {
        return true;
    } else {
        return false;
    }
}

bool logout() {
    std::cout << "User logged out" << std::endl;
}

int main() {
    std::cout << "Login module loaded" << std::endl;
    return 0;
}