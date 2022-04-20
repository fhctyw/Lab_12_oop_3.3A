#pragma once
#include <string>
using namespace std;

#pragma pack(push, 1)

class Rational
{
	int a, b;
public:
	Rational(int a = 1, int b = 1);
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	int getA() const { return a; }
	void setA(int _a) { a = _a; }
	int getB() const { return b; }
	void setB(int _b) { b = _b == 0 ? 1 : _b; }

	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);

	Rational& operator++();
	Rational& operator--();
	Rational operator++(int);
	Rational operator--(int);

	double value() const { return 1. * a / b; }

	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
private:
	void Reduce();
};

#pragma pack(pop)