#include "PrivateRational.h"
#include <sstream>
#include <iostream>

PrivateRational::PrivateRational(const PrivateRational& pr)
{
    *this = pr;
}

PrivateRational& PrivateRational::operator=(const PrivateRational& pr)
{
    setA(pr.getA());
    setB(pr.getB());
    return *this;
}

PrivateRational::operator string() const
{
    stringstream ss;
    ss << getA() << '/' << getB();
    return ss.str();
}

ostream& operator<<(ostream& out, const PrivateRational& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, PrivateRational& r)
{
    int a, b;
    cout << "Чисельник: "; cin >> a;
    cout << "Знаменник: "; cin >> b;
    r.setA(a); r.setB(b);
    return in;
}

Rational operator/(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 / (const Rational&)r2;
};

bool operator==(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 == (const Rational&)r2;
}

bool operator<(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 < (const Rational&)r2;
}

bool operator>(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 > (const Rational&)r2;
}
