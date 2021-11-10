#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class Account {
 private:
    string name;
    double balance;
 public:
    void set_balance(double bal) {
        balance = bal;
    }
    double get_balance() {
        return balance;
    }

    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
}
#endif
