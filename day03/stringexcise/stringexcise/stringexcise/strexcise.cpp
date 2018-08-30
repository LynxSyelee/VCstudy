#include<iostream>
#include <string>
#include <array>

using namespace std;

void swap(string *x, string *y);

int main()
{
	string a("123456"), b("dd");
	//	cout << a << "\t" << b << endl;
	//	swap(&a	, &b);
	//	cout << a << "\t" << b << endl;

	cout << a.size() << endl;
	cout << a.length() << endl;
	cout << a.capacity() << endl;
	cout << a.max_size() << endl;
	a += b;
	cout << a << endl;

	char array1[10] = { 0 };
	char *array1ptr = array1;

	//copy命令的用法
	int count;
	count = a._Copy_s(array1ptr, 10, 4, 0);
	cout << array1ptr << "\t" << count << endl;

	//find命令的用法
	string str{ "this is a book" };
	for (basic_string<char>::iterator i = str.begin(); i < str.end(); i++)
	{
		cout << *i;
	}

	cout << endl;
	const char* c = str.c_str();
	cout << c << endl;
	return 0;
}

void swap(string *x,string *y)
{
	string temp;
	temp = *x;
	*x = *y;
	*y = temp;
}