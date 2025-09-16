#include <iostream>
#include <thread>
#include <chrono>
#include <math.h>
#include <string>

/*
Three inputs per calculation: what calculation, first number, second number
Calculations: add, subtract, multiply, divide, exponents, and bonus for rounding

*/

void delayed_print(const std::string& message, int delay_seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(delay_seconds));
    std::cout << message << std::endl;
}
void delay(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
void print(const std::string& message) {
    std::cout << message << std::endl;
}



int main() {
    double num1, num2; // declare variables for both numbers
    std::string calculation; // declare variable for calculation type
    print("Starting new program..."); // inform user that the program is running
    delay(2);
    print("This program features delayed prints"); //state delayed print
    delayed_print("What calculation would you like to perform? (add, subtract, multiply, divide, exponent, round)", 8); // ask for calculation type
    std::cin >> calculation;
    print("Enter first number:"); // ask for first number
    std::cin >> num1; // get first number
    print("Enter second number:"); // ask for second number
    std::cin >> num2; // get second number
    if (calculation == "add" || calculation == "+") { // primary calculation
        print("Calculating...");
        delay(2);
        std::cout << "Result: " << num1 + num2 << std::endl;
    } else if (calculation == "subtract" || calculation == "-") {
        print("Calculating...");
        delay(2);
        std::cout << "Result: " << num1 - num2 << std::endl;
    } else if (calculation == "multiply" || calculation == "*") {
        print("Calculating...");
        delay(2);
        std::cout << "Result: " << num1 * num2 << std::endl;
    } else if (calculation == "divide" || calculation == "/") {
        print("Calculating...");
        delay(2);
        if (num2 != 0) {
            std::cout << "Result: " << num1 / num2 << std::endl;
        } else {
            print("Error: Division by zero is undefined.");
        }
    } else if (calculation == "exponent" || calculation == "^" || calculation == "power") {
        print("Calculating...");
        delay(2);
        std::cout << "Result: " << pow(num1, num2) << std::endl;
    } else if (calculation == "round") {
        print("Calculating...");
        delay(2);
        std::cout << "Rounded first number: " << round(num1) << ", Rounded second number: " << round(num2) << std::endl;
    } else {
        print("Invalid calculation type. Please try again.");
    }
    main(); // restart program for another calculation
    return 0;
    
}
