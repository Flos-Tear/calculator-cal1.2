#include <iostream>
#include <windows.h>

// Function to set the text color in the console
void set_color(int color_code) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color_code);
}

int main() {
    char op;
    float num1, num2;

    set_color(11); // Light Cyan for the title
    std::cout << "--- C++ Calculator ---" << std::endl;
    set_color(7); // Reset to default white

    while (true) {
        set_color(14); // Yellow for operator prompt
        std::cout << "\nEnter operator (+, -, *, /) or 'x' to exit: ";
        std::cin >> op;

        if (op == 'x' || op == 'X') {
            break;
        }

        set_color(10); // Green for number prompts
        std::cout << "Enter two operands: ";
        std::cin >> num1 >> num2;

        set_color(13); // Light Purple for the result
        switch(op) {
            case '+':
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    set_color(12); // Red for error
                    std::cout << "Error! Division by zero is not allowed." << std::endl;
                }
                break;
            default:
                set_color(12); // Red for error
                std::cout << "Error! Invalid operator." << std::endl;
        }
        set_color(7); // Reset to default white
    }

    set_color(11); // Light Cyan for exit message
    std::cout << "\nExiting calculator. Goodbye!" << std::endl;
    set_color(7); // Reset to default white

    return 0;
}
