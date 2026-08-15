#include <iostream>
#include <string>

struct Profile {
    std::string name;
    int age;
};

void deleteProfile(Profile& pr) {
    pr.name = "";
    pr.age = 0;
    std::cout << "Profile removed" << std::endl;
}

void updateProfile(Profile& pr) {
    std::cout << "Update link sent" << std::endl;
}

void changeDP() {
    std::cout << "DP changed" << std::endl;
}

void displayProfile(const Profile& pr) {
    std::cout << "Name: " << pr.name << std::endl;
    std::cout << "Age: " << pr.age << std::endl;
}

int main() {
    std::cout << "Profile loaded" << std::endl;
    return 0;
}