#include <iostream>
#include <vector>

void trackEvent(const std::string& event) {
    std::cout << "Tracking: " << event << std::endl;
}

void generateReport(const std::vector<std::string>& events) {
    std::cout << "Report: " << events.size() << " events" << std::endl;
}

void clearEvents() {
    std::cout << "All events cleared" << std::endl;
}

int main() {
    trackEvent("login");
    return 0;
}