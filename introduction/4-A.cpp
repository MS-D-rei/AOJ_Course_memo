#include <iomanip>
#include <iostream>

int main() {
    int a{};
    int b{};

    std::cin >> a >> b;

    int d{a / b};
    int r{a % b};
    double f{static_cast<double>(a) / b};

    std::cout << std::fixed << std::setprecision(5);
    std::cout << d << ' ' << r << ' ' << f << '\n';

    return 0;
}
