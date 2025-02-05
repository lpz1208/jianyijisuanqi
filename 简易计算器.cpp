#include <iostream>

void calculator() {
    char op;
    double a, b;
    std::cin >> a >> op >> b;

    switch (op) {
    case '+':
        std::cout << a + b << std::endl;
        break;
    case '-':
        std::cout << a - b << std::endl;
        break;
    case '*':
        std::cout << a * b << std::endl;
        break;
    case '/':
        if (b == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
        }
        else {
            std::cout << a / b << std::endl;
        }
        break;
    default:
        std::cout << "Error: Invalid operator!" << std::endl;
    }
}

// 示例测试代码（实际使用时需要调用calculator函数）
int main() {
    calculator();
    return 0;
}