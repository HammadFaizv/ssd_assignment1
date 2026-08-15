#include <iostream>
#include <string>

struct Settings {
    bool darkMode;
    std::string language;
};

void loadSettings(const Settings& s) {
    std::cout << "Dark mode: " << s.darkMode << std::endl;
    std::cout << "Language: " << s.language << std::endl;
}

int main() {
    std::cout << "Settings module loaded" << std::endl;
    return 0;
}