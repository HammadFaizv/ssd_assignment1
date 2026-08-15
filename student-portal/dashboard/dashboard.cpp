#include <iostream>
#include <vector>
#include <string>


void sessionHashing(int sessions) {
    std::cout << "Sessions hashed" << std::endl;
}

void showAlerts(const std::vector<std::string>& alerts) {
    for (const auto& a : alerts)
        std::cout << "Alert: " << a << std::endl;
}

void showDashboard() {
    std::cout << "Dashboard loaded" << std::endl;
}

void showStats(int users, int sessions) {
    std::cout << "Users: " << users << std::endl;
    std::cout << "Sessions: " << sessions << std::endl;
}


void showActivityFeed() {
    // TODO: fetch from database
    std::cout << "Activity today:" << std::endl;
    std::cout << "Activity feed as follows" << std::endl;
}

int main() {
    showDashboard();
    return 0;
}