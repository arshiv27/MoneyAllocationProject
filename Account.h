/* This file is the header file for the Account class. It declares the Account class and its member
functions and variables. */
#ifndef ACCOUNT_H
#define ACCOUNT_H

//declares the Account class
class Account {
public:
    Account(); //declares constructor for Account class

    void createAccount(); //declares function for creating account and storing income, spending, and savings
    void showAccountStatus() const; //declares function for outputting user account details

private:
    double income; //declares variable for storing income
    double totalSpending; //declares variable for storing totalSpending
    double savings; //declares variable for storing savings
};

#endif