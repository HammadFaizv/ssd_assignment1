#include <iostream>
#include <string>

struct Profile {
    std::string name;
    int age;
};

void displayProfile(const Profile& pr) {
    std::cout << "Name: " << pr.name << std::endl;
    std::cout << "Age: " << pr.age << std::endl;
}

int main() {
    std::cout << "Profile loaded" << std::endl;
    return 0;
}