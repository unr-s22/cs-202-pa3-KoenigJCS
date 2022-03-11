//Account.cpp
#include "Account.h"

Account::Account():{}

void Account::makeDeposit(Money money(int &dollars, int &cents)){
    storeD[countDep] = money;
    countDep ++;
    needBalUpdt = true;
}

void Account::makeWithdrawals(Money money(int &dollars, int &cents))){
    storeW[countWit] = money;
    countWit ++;
    needBalUpdt = true;
}

int Account::getBalance(){
    if(needBalUpdt){
        for(int k = 0, j=0; k < (storeD.length() + storeW.length()), k++){
            if(storeD[k] != '\0'){
                currentBal += storeD[k];
            } else if(storeD[k] == '\0' && storeW[j]{
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
    needBalUpdt = false;
}

ostream& operator <<(std::ostream& os, const Money& money){
    os<<"Account Details\n--------------------------\nCurrent Balance: "
    << getBalance() << "\n--------------------------\nNumber of Deposits: "
    << countDep << "\n--------------------(1) " << storeD[0] <<
    "\n(2) " << storeD[1] << "(3) " << storeD[2] << 
    "\n--------------------------\nNumber of Withdrawals: "
    << countWit << "\n--------------------------\n(1) " << storeW[0] << endl;

    return os;
}

Account::~Account(){

}