//main.cpp
#include "Account.h"
#include "Money.h"

int main(){
    Account account(300.23);

    cout << account << endl;

    account.makeDeposit(Money moneyAAdd(200, 00));
    account.makeDeposit(Money moneyBAdd(300, ));
    account.makeDeposit(Money moneyCAdd(501, ));

    cout << account << endl;

    account.makeWithdrawal(Money moneyDSub(300, ));
    account.makeWithdrawal(Money moneyESub(201, ));

    cout << account << endl;

    Money mtest(100, 10);
    Money ntest(100, 10);
    if(m > n){
        cout << "The operators are not working as inteded\n" << endl;
    } else {
        cout << "The operators are working as intended\n" << endl;
    }

    return 0;
}