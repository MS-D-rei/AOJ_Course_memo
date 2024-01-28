#include <iostream>

void printSharpAllInRow(int W) {
    for (int indexW{0}; indexW < W; indexW++) {
        std::cout << '#';
    }
    std::cout << '\n';
}

int main() {
    int H{}, W{};

    while (true) {
        std::cin >> H >> W;

        if (H == 0 && W == 0) {
            break;
        }

        for (int indexH{0}; indexH < H; indexH++) {
            if (indexH == 0 || indexH == H - 1) {
                printSharpAllInRow(W);
            } else {
                std::cout << '#';
                for (int indexW{0}; indexW < W - 2; indexW++) {
                    std::cout << '.';
                }
                std::cout << '#' << '\n';
            }
        }

        std::cout << '\n';
    }
}
