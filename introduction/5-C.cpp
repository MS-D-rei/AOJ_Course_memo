#include <iostream>

int main() {
    int H{}, W{};

    while (true) {
        std::cin >> H >> W;

        if (H == 0 && W == 0) {
            break;
        }

        for (int indexH{0}; indexH < H; indexH++) {
            for (int indexW{0}; indexW < W; indexW++) {
                if ((indexH + indexW) % 2 == 0) {
                    std::cout << '#';
                } else {
                    std::cout << '.';
                }
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
}
