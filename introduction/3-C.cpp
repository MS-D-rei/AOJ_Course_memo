#include <iostream>

int main() {
    int x{};
    int y{};

    while (true) {
        std::cin >> x >> y;

        if (x == 0 && y == 0) {
            break;
        }

        if (x > y) {
            std::cout << y << ' ' << x << '\n';
        } else {
            std::cout << x << ' ' << y << '\n';
        }
    }

    return 0;
}
