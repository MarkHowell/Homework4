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
//std::ostream& operator<<(std::ostream& output, Rational a);

Rational::Rational()
{
}

Rational::Rational(int n, int d)
{
	if (d == 0)
		;// throw 
	num = n;
	denom = d;

}

Rational::Rational(int n)
{
	//Default constructor, needs values that would be used to a valid fraction

	num = 0;
	denom = 1;

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
	int currentNum = num;
	int currentDenom = denom;
	int remainder = 1;
	while (remainder != 0)
	{
		remainder = currentNum % currentDenom;
		if (remainder == 0)
		{
			
			num = num / currentDenom;
			denom = denom / currentDenom;
		
		}
		else
		{
		currentNum = currentDenom;
		currentDenom = remainder;
		}
	}
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

int main()
{

	Rational fraction = Rational(48, 18);
	fraction.normalize();
	Rational fraction2 = Rational(23, 7);
	fraction2.normalize();
	Rational fraction3 = Rational(18, 48);
	fraction3.normalize();
	Rational fraction4 = Rational(7, 23);
	fraction4.normalize();
	Rational fraction5 = Rational(7, 21);
	fraction5.normalize();
	Rational fraction6 = Rational(21, 7);
	fraction6.normalize();
	return 0;
}