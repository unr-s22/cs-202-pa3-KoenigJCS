//Account.cpp
#include "Account.h"

Account::Account(int startBal){
    Money money( );
}

void Account::makeDeposit(money( )){
    
    countDep ++;
    needBalUpdt = true;
}

void Account::makeWithdrawals(money( )){

    countWit ++;
    needBalUpdt = true;
}

string Account::getBalance(){
    for(int i = 0; i < countDep; i ++){
        depTot << "(" << i << ") " << money( ) << "\n" << endl;
    }
    for(int j = 0; j < countWit; j ++){
        witTot << "(" << j << ") " << money( ) << "\n" << endl;
    }
    if(needBalUpdt){
        outputBal << "Account Details\n------------------\n
        Current Balance: " << money( ) << "\n------------------\n
        Number of Deposits: " << countDep << "\n------------------\n"
        << depTot << "------------------\nNumber of Withdrawals: " <<
        countWit << "------------------\n" << witTot << endl;
    } else {
        outputBal << "Current Balance: " << money( ) << "\n" << endl;

    }
    needBalUpdt = false;
}

Account::~Account(){

}