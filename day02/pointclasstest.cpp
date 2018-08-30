#include<iostream>
#include<iomanip>


using namespace std;

class Point
{
public:

	//���캯��
	Point()   //���������Ĺ�����
	{
		x = 0;
		y = 0;
	}
	Point(float a, float b)  //�������Ĺ�����
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
	//��������
	~Point() {};
	
	//������������ 
	void SetPoint(float a, float b)
	{
		x = a;
		y = b;
	}

	//����SetPoint ������������
	void SetPoint(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}

	//��λ������굽ԭ��
	void ResetPoint(void)
	{
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}

	//�ڿ���̨��ʾxy�������
	void ShowPoint(void)
	{
		cout << "(" << x << "," << y << ")" << endl;
	}

	//�ڿ���̨��ʾxyz�������
	void ShowPoint3D(void)
	{
		cout << "(" << x << "," << y << "," << z << ")" << endl;
	}

private:
	float x, y, z; //�洢λ�õ�� x y zֵ

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