#include <iostream>

int main() {
    int cardNumber{};

    std::cin >> cardNumber;

    int cards[4][13]{};

    for (int i{}; i < cardNumber; i++) {
        char suit{};
        int rank{};

        std::cin >> suit >> rank;

        switch (suit) {
        case 'S':
            cards[0][rank - 1] = 1;
            break;
        case 'H':
            cards[1][rank - 1] = 1;
            break;
        case 'C':
            cards[2][rank - 1] = 1;
            break;
        case 'D':
            cards[3][rank - 1] = 1;
            break;
        }
    }

    for (int i{}; i < 4; i++) {
        switch (i) {
        case 0:
            for (int j{}; j < 13; j++) {
                if (cards[i][j] == 0) {
                    std::cout << "S " << j + 1 << '\n';
                }
            }
            break;
        case 1:
            for (int j{}; j < 13; j++) {
                if (cards[i][j] == 0) {
                    std::cout << "H " << j + 1 << '\n';
                }
            }
            break;
        case 2:
            for (int j{}; j < 13; j++) {
                if (cards[i][j] == 0) {
                    std::cout << "C " << j + 1 << '\n';
                }
            }
            break;
        case 3:
            for (int j{}; j < 13; j++) {
                if (cards[i][j] == 0) {
                    std::cout << "D " << j + 1 << '\n';
                }
            }
            break;
        }
    }

    return 0;
}
