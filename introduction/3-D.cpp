#include <iostream>

int main() {
    int a{};
    int b{};
    int c{};

    std::cin >> a >> b >> c;

    int divisorCount{0};

    for (int i{a}; i <= b; i++) {
        if (c % i == 0) {
            divisorCount++;
        }
    }

    std::cout << divisorCount << '\n';

    return 0;
}
