//Money.cpp
#include "Money.h"

Money::Money(int dollar, int cents):m_dollars(dollar),m_cents(cents){};
Money::Money():m_dollars(0),m_cents(0){};

std::ostream& operator <<(std::ostream& os, const Money& money)
{
    os<<'$';
    if(money.m_dollars==0&&money.m_cents<0)
    {
        os<<'-'<<money.m_dollars;
    }
    else
    {
        os<<money.m_dollars;
    }

    if((money.m_cents>-10 && money.m_cents<0)||(money.m_cents<10&& money.m_cents>0))
    {
        os<<".0";
    }
    else
    {
        os<<'.';
    }

    if(money.m_cents<0)
    {
        os<<money.m_cents*-1;
    }
    else
    {
        os<<money.m_cents;
    }

    return os;
}
bool operator ==(const Money& money1, const Money& money2)
{
    return money1.m_dollars==money2.m_dollars && money1.m_cents==money2.m_cents;
}

bool operator >=(const Money& money1, const Money& money2)
{
    return(money1.m_dollars>money2.m_dollars||(money1.m_dollars==money2.m_dollars&&money1.m_cents>=money2.m_cents));
}

bool operator <=(const Money& money1, const Money& money2)
{
    return(money1.m_dollars<money2.m_dollars||(money1.m_dollars==money2.m_dollars&&money1.m_cents<=money2.m_cents));
}

bool operator !=(const Money& money1, const Money& money2)
{
    return money1.m_dollars!=money2.m_dollars||money1.m_cents!=money2.m_cents;
}

bool operator >(const Money& money1, const Money& money2)
{
    return(money1.m_dollars>money2.m_dollars||(money1.m_dollars==money2.m_dollars&&money1.m_cents>money2.m_cents));
}

bool operator <(const Money& money1, const Money& money2)
{
    return(money1.m_dollars<money2.m_dollars||(money1.m_dollars==money2.m_dollars&&money1.m_cents<money2.m_cents));
}

Money operator +(const Money& money1, const Money& money2)
{
    Money m0(money1.m_dollars+money2.m_dollars,money1.m_cents+money2.m_cents);
    if(m0.m_cents>=100)
    {
        m0.m_cents-=100;
        m0.m_dollars++;
    }
    return m0;
}

Money operator -(const Money& money1, const Money& money2)
{
    Money m0(money1.m_dollars-money2.m_dollars,money1.m_cents-money2.m_cents);
    if(m0.m_cents>=0 && m0.m_dollars<0)
    {
        m0.m_cents-=100;
        m0.m_dollars++;
    }
    return m0;
}