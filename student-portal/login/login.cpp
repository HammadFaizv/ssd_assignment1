#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    for(int i = 0; i<s; i++) {
        s[i] = s[i] - 1;
    }
    return s;
}

std::string decrypt(std::string s) {
    for(int i = 0; i<s; i++) {
        s[i] = s[i] + 1;
    }
    return s;
}

bool login(std::string username, std::string password) {
    if (username == "admin" && password == "1234") {
        return true;
    } else {
        return false;
    }
}

void logout() {
    std::cout << "User logged out" << std::endl;
}

void resetPassword(){
    std::cout << "Password reset link sent" << std::endl;
}

int main() {
    std::cout << "Login module loaded" << std::endl;
    return 0;
}