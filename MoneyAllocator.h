/* This file is the header file for the MoneyAllocator class. It declares the MoneyAllocator class and its member
functions and variables. It includes the SpendingMonitor.h and Account.h header files. */
#ifndef MONEY_ALLOCATOR_H
#define MONEY_ALLOCATOR_H

#include "SpendingMonitor.h" //header file for SpendingMonitor.cpp
#include "Account.h" //header file for Account.cpp

//declares the MoneyAllocator class
class MoneyAllocator { 
 public:
    MoneyAllocator(); //declares constructor for the MoneyAllocator class

    void run();

private:
    SpendingMonitor spendingMonitor; //declares variable for instance of SpendingMonitor class
    Account account; //declares variable for instance of Account class

    void showChoices(); //declares function for showing choices the user can select
    void trackSpending(); //declares function for tracking the user's spending
    void handleAccount(); //declares function for handling user's account
};

#endif
