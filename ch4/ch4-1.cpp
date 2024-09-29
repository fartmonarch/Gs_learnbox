#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Circle
{
private:
	double m_radius;
public:
	double Getarea();
	Circle()
	{
		m_radius = 1;
		cout << "调用了无参构造函数" << endl;
	}
	Circle(double radius)
	{
		m_radius = radius;
		cout << "调用了有参构造函数" << endl;
	}
	Circle(const Circle& C)
	{
		m_radius = C.m_radius;
		cout << "调用了拷贝构造函数" << endl;
	}
	~Circle()
	{
		cout << "调用了析构函数" << endl;
	}
	
};

double Circle::Getarea()
{
	return 3.14 * m_radius * m_radius;
}

int main()
{
	Circle c1;
	cout << "c1的面积:" << c1.Getarea() << endl;

	Circle c2(4);
	cout << "c2的面积:" << c2.Getarea() << endl;

	Circle c3 = c2;
	cout << "c3的面积:" << c3.Getarea() << endl;
	return 0;
}