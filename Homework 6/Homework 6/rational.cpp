#include <iostream>
#include <string>
#include <cassert>

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
	int num;
	int denom;
	
};
std::ostream& operator<<(std::ostream& output, Rational a);Rational::Rational()
{
}

Rational::Rational(int n, int d)
{
	if (d == 0)
		;// throw 
}

Rational::Rational(int n)
{
}

int Rational::get_numerator() const
{
	return num;
}

int Rational::get_denominator() const
{
	return denom;
}

void Rational::normalize()
{
	// Do stuff
	assert (denom > 0);
}

Rational Rational::operator+(Rational b) const
{
	return Rational();
}

Rational Rational::operator-(Rational b) const
{
	return Rational();
}

Rational Rational::operator*(Rational b) const
{
	return Rational();
}

Rational Rational::operator/(Rational b) const
{
	return Rational();
}

bool Rational::operator==(Rational b) const
{
	return false;
}

bool Rational::operator<(Rational b) const
{
	return false;
}

double Rational::toDecimal() const
{
	return (static_cast <double> (num) / static_cast <double> (denom));
}