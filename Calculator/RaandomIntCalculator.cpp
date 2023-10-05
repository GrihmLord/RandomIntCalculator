#include <iostream>
#include <cstdlib>
#include <ctime>

// Function prototypes
int add(int num1MW, int num2MW);
int subtract(int num1MW, int num2MW);
int multiply(int num1MW, int num2MW);
double divide(int num1MW, int num2MW);
int modulo(int num1MW, int num2MW);

int main() {
    int num1MW, num2MW;
    char operationMW;
    char choiceMW;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    do {
        // Get user input or enter "R" for random numbers
        std::cout << "Enter two integers or type 'R' for random numbers: ";
        std::string userInputMW;
        std::cin >> userInputMW;

        if (userInputMW == "R" || userInputMW == "r") {
            // Generate random numbers
            num1MW = rand() % 100;
            num2MW = rand() % 100;
            std::cout << "Generated random numbers: " << num1MW << " and " << num2MW << std::endl;
        } else {
            // Parse user input
            num1MW = std::stoi(userInputMW);
            std::cin >> num2MW;
        }

        // Get the desired operation from the user
        std::cout << "Select an operation (+, -, *, /, %): ";
        std::cin >> operationMW;

        // Perform the selected operation and display the result
        switch (operationMW) {
            case '+':
                std::cout << "Result: " << add(num1MW, num2MW) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << subtract(num1MW, num2MW) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << multiply(num1MW, num2MW) << std::endl;
                break;
            case '/':
                if (num2MW != 0) {
                    std::cout << "Result: " << divide(num1MW, num2MW) << std::endl;
                } else {
                    std::cout << "Division by zero is not allowed." << std::endl;
                }
                break;
            case '%':
                if (num2MW != 0) {
                    std::cout << "Result: " << modulo(num1MW, num2MW) << std::endl;
                } else {
                    std::cout << "Modulo by zero is not allowed." << std::endl;
                }
                break;
            default:
                std::cout << "Invalid operation." << std::endl;
        }

        // Ask the user if they want to continue
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choiceMW;

    } while (choiceMW == 'y' || choiceMW == 'Y');

    return 0;
}

// Function to perform addition (MW at the absolute end)
int add(int num1MW, int num2MW) {
    return num1MW + num2MW;
}

// Function to perform subtraction (MW at the absolute end)
int subtract(int num1MW, int num2MW) {
    return num1MW - num2MW;
}

// Function to perform multiplication (MW at the absolute end)
int multiply(int num1MW, int num2MW) {
    return num1MW * num2MW;
}

// Function to perform division (MW at the absolute end)
double divide(int num1MW, int num2MW) {
    return static_cast<double>(num1MW) / num2MW;
}

// Function to perform modulo (MW at the absolute end)
int modulo(int num1MW, int num2MW) {
    return num1MW % num2MW;
}
