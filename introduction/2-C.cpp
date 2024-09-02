#include <iostream>

// int main() {
//     int a{};
//     int b{};
//     int c{};
//
//     std::cin >> a >> b >> c;
//
//     if (a > b) {
//         int temp{a};
//         a = b;
//         b = temp;
//     }
//     if (b > c) {
//         int temp{b};
//         b = c;
//         c = temp;
//     }
//     if (a > b) {
//         int temp{a};
//         a = b;
//         b = temp;
//     }
//
//     std::cout << a << " " << b << " " << c << '\n';
//
//     return 0;
// }

// void print_array(int array[], int size) {
//     for (int i{0}; i < size; ++i) {
//         std::cout << array[i] << " ";
//     }
//     std::cout << '\n';
// }

int main() {
    int a{};
    int b{};
    int c{};

    std::cin >> a >> b >> c;

    int array[3]{a, b, c};
    int size{sizeof(array) / sizeof(array[0])};

    for (int i{size}; i > 1; --i ) {
        for (int j{0}; j < i - 1; ++j) {
           if (array[j] > array[j + 1]) {
               int temp{array[j]};
               array[j] = array[j + 1];
               array[j + 1] = temp;
           }
        }
    }

    std::cout << array[0] << " " << array[1] << " " << array[2] << '\n';

    return 0;
}
