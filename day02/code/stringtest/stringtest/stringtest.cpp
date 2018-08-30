#include<iostream>
#include<string>
#include<iomanip>
#include<limits>
#include<complex>

using namespace std;

int main(void)
{
	string s1("Hello");
	string s2("World");
	cout << s1 << endl;
	cout << s2 << endl;

	char *ch = (char*)"everyone";
	cout << ch << endl;

	char c = 'i';

	string s12 = s1 + s2;
	cout << s12 << endl;
	cout << endl;

	string s13 = s1 + ch;
	cout << s13 << endl;

	string s12s13 = s12 + s13;
	cout << s12s13 << endl;

	if (s1 != s2)
	{
		cout << "s1不等于s2" << endl;
	}
	else
	{
		cout << "s1等于s1" << endl;
	}

	string cc1, cc2;
	cc1 = "this";
	cc2 = "student";
	cout << cc1 << endl;
	cout << cc2 << endl;
	cc1.swap(cc2);
	cout << cc1 << endl;
	cout << cc2 << endl;
	
	string cc3;
	cc3 = "256";
	cout << cc3 << endl;
	int m;
	m = stoi(cc3);
	cout << m + 1 << endl;
	
	string st("this is a book");
	cout << st << '\t' << st.length() << endl;
	cout << st << '\t' << st.size() << endl;

	const char *ptr1 = 0;
	ptr1 = st.data();
	cout << ptr1 << endl;
	cout << strlen(ptr1) << endl;

	const char *ptr2 = st.c_str();
	cout << ptr2 << endl;
	cout << strlen(ptr2) << endl;



	return 0;
}