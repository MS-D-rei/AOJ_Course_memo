#include <iomanip>
#include <iostream>

int main() {
    double r{};

    std::cin >> r;

    double pi{3.141592653589};

    std::cout << std::fixed << std::setprecision(5);
    std::cout << pi * r * r << ' ' << 2 * pi * r << '\n';

    return 0;
}
