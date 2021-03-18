#include"mytime0.h"
#include <iostream>
using namespace std;
Time::Time()
{
	hours = minutes = 0;
}
Time::~Time()
{
}
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::AddMin(int m) 
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h)
{
	hours += h;
}
void Time::Reset(int h, int m )
{
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours+ sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}
Time Time:: operator-(const Time& t)const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
Time Time::operator*(double n) const
{
	Time result;
	long total = hours * n * 60 + minutes * n;
	result.hours = total / 60;
	result.minutes = total % 60;
	return result;
}
Time operator*(double m, const Time& t)
{
	// this is not a member function ,so no Time::
	Time result;
	long total = t.hours * m * 60 + t.hours * m;
	result.hours = total / 60;
	result.minutes = total % 60;
	return result;
	//with this function, if we write A=2.75*B;
	// it means A = operator*(2.75,B);
}
ostream& operator<<(ostream & os, const Time& t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}
 