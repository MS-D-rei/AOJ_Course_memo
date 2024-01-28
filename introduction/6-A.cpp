#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::size_t size{};

    std::cin >> size;

    std::vector<int> numbers(size);

    int length{static_cast<int>(size)};

    for (int index{0}; index < length; index++) {
        std::cin >> numbers.at(index);
    }

    for (int index{length - 1}; index >= 0; index--) {
        std::cout << numbers.at(index);

        if (index != 0) {
            std::cout << ' ';
        }
    }

    std::cout << '\n';

    return 0;
}
