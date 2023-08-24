#include<iostream>
#include<string>
using namespace std;
#include <fstream>

template <typename T>
void show(T& a)
{
	cout << a << endl;
}

//
int main()
{
	int a = 1;
	double b = 2.0;
	string c = "hello";
	show<int>(a);
	show<double>(b);
	show<string>(c);
	return 0;
}