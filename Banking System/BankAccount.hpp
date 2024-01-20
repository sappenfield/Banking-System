//
//  BankAccount.hpp
//  Banking System
//
//  Created by AJ Sappenfield on 1/18/24.
//

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
#include <string>

using namespace std;

class BankAccount {
    
private:
    string name;
    int pin;
    int accountNumber;
    double accountBalance;
    
    
    
public:
    BankAccount();
    void displayAccountInfo(string a);
    void verifyPin(int pin);
    void deposit(double ammDep);
    void withdraw(double ammWit);
    void deleteAccount();
    void getAccountNumber();
    void getPin();
    
    
    
};






#endif /* BankAccount_hpp */
