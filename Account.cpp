//Account.cpp
#include "Account.h"

Account::Account(){};

void Account::makeDeposit(Money& money(int &dollars, int &cents)){
    storeD[countDep] = money(dollars, cents);
    countDep ++;
    needBalUpdt = true;
}

void Account::makeWithdrawals(Money& money(int &dollars, int &cents)){
    storeW[countWit] = money(dollars, cents);
    countWit ++;
    needBalUpdt = true;
}

std::vector<Money*> Account::getBalance(){
    if(needBalUpdt){
        needBalUpdt = false;
        for(int k = 0; k < storeD.size(); k++){
            if(k < countDep){
                storeTrans[k] = storeD[k];
            }
        }
        for(int j = 0; j < storeW.size(); j++){
            if(j < countWit){
                storeTrans[j] = storeW[j];
            }
        }
        countDep = 0;
        countWit = 0;
        return storeTrans;
    } else {
        return storeTrans;
    }
}

std::ostream& operator <<(std::ostream& os, Account& account){
    
    os<<"Account Details\n--------------------------\nCurrent Balance: ";
    
    std::vector<Money*> storeBal = account.getBalance();
    
    for(int l = 1; l < (account.getCountDep() + account.getCountWit()); l++){
        if(l < account.getCountDep()){
            storeBal[0] = storeBal[0] + storeBal[l];
        } else {
            storeBal[0] = storeBal[0] - storeBal[l];
        }
    }
    os << storeBal[0] << "\n--------------------------\nNumber of Deposits: "
    << account.getCountDep() << "\n--------------------";
    for(int m = 0; m < account.getCountDep(); m++){
        os << "\n(" << m << ") " << account.getStoreD(m);
    }
    os<<"\n--------------------------\nNumber of Withdrawals: "
    << account.getCountWit() << "\n--------------------------";
    for(int n = 0; n < account.getCountWit(); n++){
        os << "\n(" << n << ") " << account.getStoreW(n);
    }

    return os;
}

Account::~Account(){

}
