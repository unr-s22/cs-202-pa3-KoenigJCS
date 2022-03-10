//Account.h
#ifndef DEMO_ACCOUNT_H
#define DEMO_ACCOUNT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account(){
private:
    Money money( );
    vector<Money> storeDW;
    bool needBalUpdt = false;
    string outputBal = "", depTot = "", witTot = "";
    int countDep = 0, countWit = 0, startBal = 0;
public:
    Account(int startBal);

    void makeDeposit(money( ));
    void makeWithdrawals(money( ));
    string getBalance();

    virtual ~Account();
};

#endif