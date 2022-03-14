//Account.h
#ifndef DEMO_ACCOUNT_H
#define DEMO_ACCOUNT_H
#include "Money.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class Account
{
private:
    std::vector<Money> storeD;
    std::vector<Money> storeW;
    bool needBalUpdt = false;
    int startBal = 0;
    Money ballance{};
public:
    explicit Account();

    void makeDeposit(Money& money);
    void makeWithdrawal(Money& money);
    
    Money getStoreD(int p) { return storeD[p]; }
    void setStoreD(std::vector<Money> &sD){ storeD = sD; }
    Money getStoreW(int q) { return storeW[q]; }
    void setStoreW(std::vector<Money> &sW){ storeW = sW; }

    Money* getBalance();
    friend std::ostream& operator<<(std::ostream& os, Account& account);


    virtual ~Account();
};

#endif