/* This class allows the user to add expenses to a vector of expenses with the type of expense and its amount, 
and also allows the user to see an overall spending status of all expenses. It includes the SpendingMonitor.h header file. */
#include "SpendingMonitor.h"
#include <iostream> //allows for input and output

SpendingMonitor::SpendingMonitor() {} //defines constructor for SpendingMonitor class

//allows user to add expense to a vector of expenses
void SpendingMonitor::addExpense() {
    Expense expense; //declares an object of the SpendingMonitor::Expense struct
    std::cout << "\nSpendingMonitor\n";
    std::cout << "Enter the type of this expense: ";
    std::cin >> expense.typeOfExpense; //stores the type of expense that the user entered as a string

    std::cout << "Enter the amount of this expense: $";
    std::cin >> expense.amount; //stores the amount of the expense as a double

    expenses.push_back(expense); //adds expense to vector of expenses
}

//displays spending status to the user with all expenses and their type and amount
void SpendingMonitor::showSpendingStatus() const {
    std::cout << "\nSpendingStatus\n";
    
    for (const auto& expense : expenses) { //iterates through vector of expenses
        std::cout << "Type: " << expense.typeOfExpense << ", Amount: $" << expense.amount << "\n";
    }
}