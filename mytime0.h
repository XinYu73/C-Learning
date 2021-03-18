#pragma once
#ifndef MYTIME0_H_
#define MYTIME0_H_
#include <iostream>//不加载这个库，ostream无法识别
using namespace std;

class Time
{
public:
	Time();
	~Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;//overloading
	void Show() const;
	Time operator-(const Time& t)const;
	Time operator*(double n) const;
	friend Time operator*(double m, const Time& t);
	//friend void operator<<(ostream & os,const Time& t);
	//this implementation dosen't allow us to combine the redefined opreator with the default one.
	//预置的cout<< 返回一个cout 锁链般
	friend ostream& operator<<(ostream& os, const Time& t);
private:
	int hours;
	int minutes;
};

#endif // !MYTIME0_H_
