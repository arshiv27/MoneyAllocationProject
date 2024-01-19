/* This class allows the user to create an account and input their income and spending per month to calculate
their monthly savings, and displays that information to the user. It includes the Account.h header file.*/
#include "Account.h"
#include <iostream> //allows for input and output

Account::Account() : income(0.0), totalSpending(0.0), savings(0.0) {} //defines constructor for Account class and initializes values to 0.0

//creates account for the user
void Account::createAccount() {
    std::cout << "\nCreate Account\n";
    std::cout << "Enter your income per month (only numbers and decimals): $";
    std::cin >> income; //stores value that user inputted for their income per month

    std::cout << "Enter your total spending per month (only numbers and decimals): $";
    std::cin >> totalSpending; //stores value that user inputted for their spending per month

    savings = income - totalSpending; //calculates user's savings per month by subtracting totalSpending from income
}

//displays values for monthly income, spending, and savings to the user
void Account::showAccountStatus() const {
    std::cout << "\nAccount Status\n";
    std::cout << "Income per Month : $" << income << "\n";
    std::cout << "Total spending per Month : $" << totalSpending << "\n";
    std::cout << "Savings per Month : $" << savings << "\n";
}