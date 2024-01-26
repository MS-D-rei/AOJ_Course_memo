#include <iostream>

int main() {
    int W{};
    int H{};
    int x{};
    int y{};
    int r{};

    std::cin >> W >> H >> x >> y >> r;

    if (x - r < 0 || x + r > W || y - r < 0 || y + r > H) {
        std::cout << "No\n";
    } else {
        std::cout << "Yes\n";
    }

    return 0;
}
