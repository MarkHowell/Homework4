#include <iostream>
#include <string>


class Rational
{
public:
	Rational();
	Rational(int n, int d);
	Rational(int n);
	int get_numerator() const;
	int get_denominator() const;
	void normalize();
	Rational operator+(Rational b) const;
	Rational operator-(Rational b) const;
	Rational operator*(Rational b) const;
	Rational operator/(Rational b) const;
	bool operator==(Rational b) const;
	bool operator<(Rational b) const;
	double toDecimal() const;
private:
	double num;
	double denom;
};
std::ostream& operator<<(std::ostream& output, Rational a);Rational::Rational()
{
}

Rational::Rational(int n, int d)
{
	if (d == 0)
		// throw 
}