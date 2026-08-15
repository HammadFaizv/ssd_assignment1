#include <iostream>
#include <string>

struct Profile {
    std::string name;
    int age;
};

struct Profile list[5]; // list of user profiles

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

Profile searchProfile(std::string name) {
    for(int i = 0; i<5; i++) {
        if(list[i].name == name) {
            return list[i];
        }
    }
}

int main() {
    std::cout << "Profile loaded" << std::endl;
    return 0;
}