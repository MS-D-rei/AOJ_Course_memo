#include <iostream>

int main() {
    int n{};

    std::cin >> n;

    const int maxConstraint{1000000};
    const int minConstraint{-1000000};

    int maxValue{minConstraint};
    int minValue{maxConstraint};
    long long sumValue{};

    for (int i{}; i < n; i++) {
        int inputInteger{};
        std::cin >> inputInteger;

        if (inputInteger > maxValue) {
            maxValue = inputInteger;
        }

        if (inputInteger < minValue) {
            minValue = inputInteger;
        }

        sumValue += inputInteger;
    }

    std::cout << minValue << ' ' << maxValue << ' ' << sumValue << '\n';

    return 0;
}
