//main.cpp
#include "Account.h"
#include "Money.h"

int main(){
    Account account{};

    Money firstDep(300, 23);
    account.makeDeposit(firstDep);
    std::cout << account <<"\n\n"<< std::endl;

    Money moneyAAdd(200, 0);
    Money moneyBAdd(300, 24);
    Money moneyCAdd(501, 22);
    account.makeDeposit(moneyAAdd);
    account.makeDeposit(moneyBAdd);
    account.makeDeposit(moneyCAdd);
    std::cout << account << "\n\n"<< std::endl;

    Money moneyDSub(300, 10);
    Money moneyESub(201, 34);
    account.makeWithdrawal(moneyDSub);
    account.makeWithdrawal(moneyESub);
    std::cout << account << "\n\n"<< std::endl;

    Money mtest(100, 10);
    Money ntest(100, 10);
    Money m1{};
    if(mtest > ntest)
    {
        std::cout << "The operators > are not working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators > are working as intended\n" << std::endl;
    }
    if(mtest < ntest)
    {
        std::cout << "The operators < are not working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators < are working as intended\n" << std::endl;
    }
    if(mtest != ntest)
    {
        std::cout << "The operators != are not working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators != are working as intended\n" << std::endl;
    }

    if(mtest == ntest)
    {
        std::cout << "The operators == are working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators == are not working as intended\n" << std::endl;
    }
    Money no(0,0);
    if(mtest-mtest==no)
    {
        std::cout << "The operators - are working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators - are not working as intended\n" << std::endl;
    }
    if(no+mtest==mtest)
    {
        std::cout << "The operators + are working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators + are not working as intended\n" << std::endl;
    }
    Money test2(110,90);
    Money test2o(211,0);
    if(mtest+test2==test2o)
    {
        std::cout << mtest+test2<<"=="<<test2o<<" The operators + (overflow) are working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators + (overflow) are not working as intended\n" << std::endl;
    }
    if((test2-mtest)-mtest<no)
    {
        std::cout << (test2-mtest)-mtest<<"<0 The operators - (overflow) are working as intended\n" << std::endl;
    } 
    else 
    {
        std::cout << "The operators - (overflow) are not working as intended\n" << std::endl;
    }

    return 0;
}