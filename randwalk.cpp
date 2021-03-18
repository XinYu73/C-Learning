#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include"vect.h"
using namespace std;
int main()
{
	srand(time(0));
	double direction,target,dstep;
	Vector step;
	Vector result(0, 0);
	unsigned long steps = 0;
	cout << "Enter target distance (q)" << endl;
	while (cin>>target)
	{
		cout << "Enter step length" << endl;
		if (!(cin >> dstep))
		{
			break;
		}
		while (result.magval()<target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, POL);
		    result = result + step;
			cout << result << endl;
			steps++;
		}
		cout << "After " << steps << " steps, the subject ""has the following location: " << result << endl;
		steps = 0;
		result.reset(0, 0);
		cout << "Enter target distance (q)" << endl;
	}
	cout << "Bye!\n";
	cin.clear();//to get rid of the error flag.(q)
	while (cin.get()!='\n')//after the q we input a /n
	{
		continue;
	}
	return 0;
}