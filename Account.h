//Account.h
#ifndef DEMO_ACCOUNT_H
#define DEMO_ACCOUNT_H
#include "Money.h"
#include <iostream>
#include <vector>

class Account
{
private:
    std::vector<Money> storeD;
    std::vector<Money> storeW;
    bool needBalUpdt = false;
    Money balance{};
public:
    explicit Account();

    void makeDeposit(Money& money);
    void makeWithdrawal(Money& money);
    Money* getBalance();
    friend std::ostream& operator<<(std::ostream& os, Account& account);

    virtual ~Account();
};

#endif