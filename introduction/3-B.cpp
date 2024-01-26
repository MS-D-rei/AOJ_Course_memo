#include <iostream>

int main() {
    int caseNumber{0};

    while (true) {
        int x{};
        std::cin >> x;

        if (x == 0) {
            break;
        }

        caseNumber++;

        std::cout << "Case " << caseNumber << ": " << x << '\n';
    }

    return 0;
}
