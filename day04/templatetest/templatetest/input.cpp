#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	char n(NULL);
	cout << n << endl;
	cout << "please input a char varible\n" << endl;
	while (  ( n = getchar() ) != ' ' )
	{	
		cout << endl;
		if (n != '\n')
		{
			cout << "the input variable is " << (int)n << endl;
		}	
	}
	
	return 0;
}

