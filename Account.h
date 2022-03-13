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
    std::vector<Money*> storeD;
    std::vector<Money*> storeW;
    bool needBalUpdt = false;
    int countDep = 0, countWit = 0, startBal = 0;
    Money money(int &dollars, int &cents);
    std::vector<Money*> storeTrans;
public:
    explicit Account();

    void makeDeposit(Money& money(int &dollars, int &cents));
    void makeWithdrawals(Money& money(int &dollars, int &cents));
    
    int getCountDep(){ return countDep; }
    void setCountDep(int cD){ countDep = cD; }
    int getCountWit(){ return countWit; }
    void setCountWit(int cW){ countWit = cW; }
    Money* getStoreD(int p) { return storeD[p]; }
    void setStoreD(std::vector<Money*> &sD){ storeD = sD; }
    Money* getStoreW(int q) { return storeW[q]; }
    void setStoreW(std::vector<Money*> &sW){ storeW = sW; }

    std::vector<Money*> getBalance();
    friend std::ostream& operator<<(std::ostream& os, Account& account);


    virtual ~Account();
};

#endif