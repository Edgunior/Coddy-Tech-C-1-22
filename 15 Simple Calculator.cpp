#include <iostream>

int main() {
    char op;
    float num1, num2, res;
    std::cin >> op;
    std::cin >> num1 >> num2;
    switch (op) {

    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            num1 / num2;
        else
            std::cout << "errors with divisions are not allowed" << std::endl;
        break;
    default:
        std::cout << "Error: Invalid operator" << std::endl;
        return 1; // Exit the program with an error code
    }std::cout << res;
    return 0;

}



