#include<iostream>
#include<string>
#include<iomanip>
#include<complex>

using namespace std;

//模板类的使用 
//template<class T>
//inline T max(T m1, T m2)
//{
//	return (m1 > m2) ? m1 : m2;
//}
//template<class T>
//inline void print(complex<T> a)
//{
//	cout << "the part real is:" << endl;
//	cout << a.real() << endl;
//	cout << "the part imag is" << endl;
//	cout << a.imag() << endl;
//}

class Point
{
private:
	double x, y;
public:
	void Setxy(double a, double b)
	{
		x = a;
		y = b;
	}

	void Display(void)
	{
		cout << x << '\t' << y << endl;
	}

	Point() :x(0), y(0) {};
	Point(double a, double b);
	Point(const Point& c);
	~Point()
	{
		cout << "destroy it" << endl;
	}
};
Point::Point(double a, double b)
{
	x = a;
	y = b;
}
Point::Point(const Point& c)
{
	x = c.x;
	y = c.y;
}

int main()
{
	//int a(23), b(11);
	//cout << max(a, b) << endl;
	//double c(23.1);
	//cout << max<double>(a, c) << endl;
	//cout << max((double)a, c) << endl;

	//complex<int> ch(2, 1);
	//complex<double> ch1(3.2, -1);
	//print(ch);
	//print(ch1);

	//const int cha = '2';
	//cout << cha << endl;

	Point pa;
	pa.Setxy(1, 2);
	pa.Display();

	Point pb;
	pb = pa;
	pb.Display();

	Point pc;
	pc.Display();

	Point *pd;
	pd = &pa;
	pd->Setxy(3, 4);
	pd->Display();

	pa.Display();

	Point pe[2];
	pe->Display();
	pe[1].Setxy(5, 6);
	pe[1].Display();

	Point *pf = new Point[3];

	for (int i = 0; i < 3; i++) {
		
		(pf+i)->Display();

	}
	delete[] pf;
	return 0;

}

