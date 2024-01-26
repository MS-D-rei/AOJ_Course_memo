#include <iostream>

int main() {
    int a{};
    int b{};
    char op{};

    while (true) {
        std::cin >> a >> op >> b;

        if (op == '?') {
            break;
        }

        switch (op) {
        case '+':
            std::cout << a + b << '\n';
            break;
        case '-':
            std::cout << a - b << '\n';
            break;
        case '*':
            std::cout << a * b << '\n';
            break;
        case '/':
            std::cout << a / b << '\n';
            break;
        }
    }

    return 0;
}
