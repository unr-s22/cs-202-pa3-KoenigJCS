//Account.h
#ifndef DEMO_ACCOUNT_H
#define DEMO_ACCOUNT_H
#include "Money.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Account
{
private:
    vector<Money> storeD;
    vector<Money> storeW;
    bool needBalUpdt = false;
    stringstream outputBal, depTot, witTot;
    int countDep = 0, countWit = 0, startBal = 0, currentBal = 0;
    Money money(int &dollars, int &cents);
public:
    explicit Account();

    void makeDeposit(Money& money);
    void makeWithdrawals(Money& money);
    int getBalance();
    friend std::ostream& operator<<(std::ostream& os, Account& account);


    virtual ~Account();
};

#endif