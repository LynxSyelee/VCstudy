#include<iostream>
#include <string>
#include <array>

using namespace std;

void swap(string *x, string *y);

int main()
{
	string a("����"), b("��ȥ");
	cout << a << "\t" << b << endl;
	swap(&a	, &b);
	cout << a << "\t" << b << endl;

	return 0;
}

void swap(string *x,string *y)
{
	string temp;
	temp = *x;
	*x = *y;
	*y = temp;
}