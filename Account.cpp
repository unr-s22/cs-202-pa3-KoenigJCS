//Account.cpp
#include "Account.h"

Account::Account(){};

void Account::makeDeposit(Money& money){
    storeD.push_back(money);
    needBalUpdt = true;
}

void Account::makeWithdrawal(Money& money){
    storeW.push_back(money);
    needBalUpdt = true;
}

Money* Account::getBalance(){
    if(needBalUpdt)
    {
        balance -= balance;
        for(int k = 0; k < storeD.size(); k++){
            balance += storeD[k];
        }
        for(int j = 0; j < storeW.size(); j++){
            balance -= storeW[j];
        }
        needBalUpdt = false;
    }
    return &balance;
}

std::ostream& operator <<(std::ostream& os, Account& account){
    
    os<<"Account Details\n--------------------------"<<std::endl<<"Current Balance: "<< *account.getBalance();
    os<<"\n--------------------------\nNumber of Deposits: "<< account.storeD.size() << "\n--------------------";
    for(int m = 0; m < account.storeD.size(); m++){
        os << "\n(" << m+1 << ") " << account.storeD[m];
    }
    os<<"\n--------------------------\nNumber of Withdrawals: "<< account.storeW.size() << "\n--------------------------";
    for(int n = 0; n < account.storeW.size(); n++){
        os << "\n(" << n+1 << ") " << account.storeW[n];
    }

    return os;
}

Account::~Account(){

}
