#include<complex>
#include<iostream>

using namespace std;

const double PI = 3.14159265359;

int main()
{
	complex<double> a(3.0, 4.0);
	cout << a << endl;
		
	//��ȡʵ�����鲿
	double realval = a.real();
	double imageval = a.imag();
	cout << realval << endl;
	cout << imageval << endl;

	//ʵ�����������
	complex<double> b;
	b = a;
	cout << b << b.imag() << "\t"<< b.real() << endl;
	a = a * a;
	cout << endl;
	cout << a << endl;

	b *= b;
	cout << b << endl;

	//����ȡģ�� �ͽǶ�
	complex<double> c(b);
	double absc = abs(c);
	double argc = arg(c);
	cout << absc << "\t" << argc << endl;

	//ʹ�ü���������ʾ����
	complex<double> d(polar(5, PI / 2));
    

	return 0;
}