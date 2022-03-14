//Money.h
#include<iostream>

#ifndef MONEY_H
#define MONEY_H
class Money
{
private:
    int m_dollars;
    int m_cents;
public:
    explicit Money(int dollars, int cents);
    explicit Money();

    friend std::ostream& operator<<(std::ostream& os,const Money& money);

    friend bool operator ==(const Money& money1, const Money& money2);
    friend bool operator >=(const Money& money1, const Money& money2);
    friend bool operator <=(const Money& money1, const Money& money2);
    friend bool operator !=(const Money& money1, const Money& money2);
    friend bool operator >(const Money& money1, const Money& money2);
    friend bool operator <(const Money& money1, const Money& money2);

    friend void operator +=(Money& money1, Money& money2);
    friend void operator -=(Money& money1, Money& money2);

    friend Money operator +(const Money& money1, const Money& money2);
    friend Money operator -(const Money& money1, const Money& money2);
};

#endif