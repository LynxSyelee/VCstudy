#include<iostream>
#include <string>


using namespace std;

void display(string a, string b="b", string c = "c")
{
	cout << a <<'\t'<< b <<'\t'<< c << endl;;
}

int main()
{
	string str1 = "this";
	string str2 = "is";
	string str3 = "book";

	display(str1, str2, str3);
	display(str1);
	display(str1, str2);

	return 0;
}