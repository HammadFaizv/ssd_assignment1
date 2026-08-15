#include <iostream>
#include <string>

struct Settings {
    bool darkMode;
    std::string language;
};

void enableAdminOptions(std::string ad) {
    if(ad == "Admin") {
        std::cout << "Admin options enabled" << std::endl;
    }
}

void saveSettings(const Settings& s) {
    std::cout << "Settings saved" << std::endl;
}

void loadSettings(const Settings& s) {
    std::cout << "Dark mode: " << s.darkMode << std::endl;
    std::cout << "Language: " << s.language << std::endl;
}

int main() {
    std::cout << "Settings module loaded" << std::endl;
    return 0;
}