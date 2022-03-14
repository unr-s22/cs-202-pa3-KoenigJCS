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
        ballance -= ballance;
        for(int k = 0; k < storeD.size(); k++){
            ballance += storeD[k];
        }
        for(int j = 0; j < storeW.size(); j++){
            ballance -= storeW[j];
        }
        needBalUpdt = false;
    }
    return &ballance;
}

std::ostream& operator <<(std::ostream& os, Account& account){
    
    os<<"Account Details\n--------------------------"<<std::endl;
    os<<"Current Balance: ";
    
    //Money* storeBal = account.getBalance();
    
    // for(int i = 0; i < (account.getCountDep()); i++){
    //     if(i < account.getCountDep()){
    //         storeBal[0] += storeBal[i];
    //     } else {
    //         storeBal[0] -= storeBal[i];
    //     }
    // }
    os << *account.getBalance() << "\n--------------------------\nNumber of Deposits: "
    << account.storeD.size() << "\n--------------------";
    for(int m = 0; m < account.storeD.size(); m++){
        os << "\n(" << m+1 << ") " << account.storeD[m];
    }
    os<<"\n--------------------------\nNumber of Withdrawals: "
    << account.storeW.size() << "\n--------------------------";
    for(int n = 0; n < account.storeW.size(); n++){
        os << "\n(" << n+1 << ") " << account.storeW[n];
    }

    return os;
}

Account::~Account(){

}
