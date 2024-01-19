/* This class allows the user to choose either to handle their account or track their spending, 
and calls the appropriate functions based on the user choice. It includes the MoneyAllocator.h header file. */
#include "MoneyAllocator.h"
#include <iostream> //allows for input and output

MoneyAllocator::MoneyAllocator() {} //defines constructor of MoneyAllocator class

//main functionality of the MoneyAllocator
void MoneyAllocator::run() {
    char choice; //variable to store user's choice
    do {
        showChoices(); //displays choices for the user to select
        std::cout << "Type the number of your choice: ";
        std::cin >> choice; //stores user's choice

        switch(choice) {
            case '1':
                handleAccount(); //if user selects 1, call functions to handle user's account
                break;
            case '2': 
                trackSpending(); //if user selects 2, call functions to track user's spending
                break;
            case '3':
                std::cout << "Exiting the money allocator. \n"; //if user selects 3, exit the program
                break;
            default:
                std::cout << "Your choice was not accepted. Please try again. \n"; //invalid choice
        }
    } while (choice != '3'); //if choice is 3, program will exit
}

//shows choices for the user to choose from 
void MoneyAllocator::showChoices() {
    std::cout << "\nMoney Allocator Choices\n"; 
    std::cout << "1 - Handle Account\n";
    std::cout << "2 - Track Spending\n";
    std::cout << "3 - Exit\n";
}

//calls functions for user to handle their account
void MoneyAllocator::handleAccount() {
    account.createAccount(); //allows user to create account and input income, spending, and calculates savings
    account.showAccountStatus(); //displays information about user's income, spending, and savings
}

//calls functions for user to track their spending
void MoneyAllocator::trackSpending() {
    spendingMonitor.addExpense(); //adds expense to vector of expenses with type of expense and amount
    spendingMonitor.showSpendingStatus(); //displays record of user's expenses
}