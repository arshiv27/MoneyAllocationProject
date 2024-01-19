/* This file is the header file for the SpendingMonitor class. It declares the SpendingMonitor class and its member
functions and variables. */
#ifndef SPENDING_MONITOR_H
#define SPENDING_MONITOR_H

#include <vector> //allows usage of vectors
#include <string> //allows usage of strings

//declares the SpendingMonitor class
class SpendingMonitor{
public:
    SpendingMonitor(); //declares constructor for SpendingMonitor class

    void addExpense(); //declares function for adding expense with its type and amount
    void showSpendingStatus() const; //declares function for showing list of all expenses

private:
    struct Expense { //declares struct to represent an expense and has two members: typeOfExpense (string) and amount (double)
        std::string typeOfExpense; //declares member variable to store type of expense
        double amount; //declares member variable to store amount of expense
    };

    std::vector<Expense> expenses; //declares member variable for vector to store multiple instances of 'Expense' struct
};

#endif