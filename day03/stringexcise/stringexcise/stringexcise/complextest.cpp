#include<complex>
#include<iostream>

using namespace std;

const double PI = 3.14159265359;

int main()
{
	complex<double> a(3.0, 4.0);
	cout << a << endl;
		
	//提取实部和虚部
	double realval = a.real();
	double imageval = a.imag();
	cout << realval << endl;
	cout << imageval << endl;

	//实现运算符重载
	complex<double> b;
	b = a;
	cout << b << b.imag() << "\t"<< b.real() << endl;
	a = a * a;
	cout << endl;
	cout << a << endl;

	b *= b;
	cout << b << endl;

	//复数取模数 和角度
	complex<double> c(b);
	double absc = abs(c);
	double argc = arg(c);
	cout << absc << "\t" << argc << endl;

	//使用极坐标来表示复数
	complex<double> d(polar(5, PI / 2));
    

	return 0;
}