//Account.cpp
#include "Account.h"

Account::Account(){};

void Account::makeDeposit(Money& money){
    storeD[countDep] = money;
    countDep ++;
    needBalUpdt = true;
}

void Account::makeWithdrawals(Money& money){
    storeW[countWit] = money;
    countWit ++;
    needBalUpdt = true;
}

int Account::getBalance(){
    if(needBalUpdt){
        needBalUpdt = false;
        for(int k = 0, j=0; k < (storeD.size() + storeW.size()); k++){
            if(storeD[k]==){
                currentBal += storeD[k];
            } else if(storeD[k] == NULL && storeW[j]){
                currentBal -= storeW[j];
                j++;
            }
        }
        countDep = 0;
        countWit = 0;
        return currentBal;
    } else {
        return currentBal;

    }
}

ostream& operator <<(std::ostream& os, Account& account){
    os<<"Account Details\n--------------------------\nCurrent Balance: "
    << account.getBalance() << "\n--------------------------\nNumber of Deposits: "
    << countDep << "\n--------------------(1) " << storeD[0] <<
    "\n(2) " << storeD[1] << "(3) " << storeD[2] << 
    "\n--------------------------\nNumber of Withdrawals: "
    << countWit << "\n--------------------------\n(1) " << storeW[0] << endl;

    return os;
}

Account::~Account(){

}