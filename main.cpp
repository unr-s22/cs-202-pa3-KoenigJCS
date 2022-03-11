//main.cpp
#include "Account.h"
#include "Money.h"

int main(){
    Account account();

    cout << account << endl;

    account.makeDeposit(Money moneyAAdd(200, 00));
    account.makeDeposit(Money moneyBAdd(300, 24));
    account.makeDeposit(Money moneyCAdd(501, 22));

    cout << account << endl;

    account.makeWithdrawal(Money moneyDSub(300, 10));
    account.makeWithdrawal(Money moneyESub(201, 34));

    cout << account << endl;

    Money mtest(100, 10);
    Money ntest(100, 10);
    if(mtest > ntest){
        cout << "The operators are not working as inteded\n" << endl;
    } else {
        cout << "The operators are working as intended\n" << endl;
    }

    return 0;
}