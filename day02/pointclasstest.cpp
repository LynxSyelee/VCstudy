#include<iostream>
#include<iomanip>


using namespace std;

class Point
{
public:

	//构造函数
	Point()   //不带参数的构造器
	{
		x = 0;
		y = 0;
	}
	Point(float a, float b)  //带参数的构造器
	{
		x = a;
		y = b;
	}
	Point(float a,float b,float c)
	{
		x = a;
		y = b;
		z = c;
	}
	//析构函数
	~Point() {};
	
	//设置两点坐标 
	void SetPoint(float a, float b)
	{
		x = a;
		y = b;
	}

	//重载SetPoint 设置三点坐标
	void SetPoint(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}

	//复位点的坐标到原点
	void ResetPoint(void)
	{
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}

	//在控制台显示xy点的坐标
	void ShowPoint(void)
	{
		cout << "(" << x << "," << y << ")" << endl;
	}

	//在控制台显示xyz点的坐标
	void ShowPoint3D(void)
	{
		cout << "(" << x << "," << y << "," << z << ")" << endl;
	}

private:
	float x, y, z; //存储位置点的 x y z值

};


int main(void)
{
	Point mPoint;
	mPoint.SetPoint(2.1, 1.2);
	mPoint.ShowPoint();
	mPoint.ResetPoint();
	mPoint.ShowPoint();

	Point Point_B{1,3};
	Point_B.ShowPoint();

	return 0;
}