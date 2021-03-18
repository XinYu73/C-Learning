#include<iostream>
#include"mytime0.h"
using namespace std;
int main1()
{
	Time planning;
	Time coding(20, 40);
	Time fixing(5, 55);
	Time total;
	cout << "planing time = \t";
	planning.Show();
	cout << endl;
	cout << "coding time= \t";
	coding.Show();
	cout << endl;
	cout << "fixing time = \t";
	fixing.Show();
	cout << endl;
	//total = coding.operator+(fixing);
	total = coding + fixing;//left :the invoking object
	cout << "coding.sum(fixing)" << endl;
	cout << total<< "This is the well defined operator";//overloaded using the first way
	return 0;
}