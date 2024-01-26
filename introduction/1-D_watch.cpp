#include <iostream>

int main() {
    int seconds{};
    std::cin >> seconds;

    std::cout << seconds / 3600 << ":" << (seconds % 3600) / 60 << ":"
              << seconds % 60 << '\n';

    return 0;
}
