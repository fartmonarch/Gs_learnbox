#include<iostream>

using namespace std;

class Point
{
    public:
        explicit Point();
        explicit Point(int x, int y);
        ~Point()
        {
            cout << "调用了析构函数1" << endl;
        }
        void SetXY(int x, int y);
        int Getx()
        {
            return m_x;
        }
        int Gety()
        {
            return m_y;
        }
    private:
        int m_x;
        int m_y;
};

Point::Point()
{
    m_x = 0;
    m_y = 0;
}

Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Point::SetXY(int x, int y)
{
    m_x = x;
    m_y = y;
}

class rectangle
{
    public:
        explicit rectangle();
        explicit rectangle(int x1, int y1, int x2, int y2);
        void Setrectangle(int x1, int y1, int x2, int y2);
        ~rectangle()
        {
            cout << "调用了析构函数2" << endl;
        }
        void Showarea();
    private:
        Point m_p1;
        Point m_p2;
};

rectangle::rectangle()
{
    m_p1.SetXY(0, 0);
    m_p2.SetXY(0, 0);
}
rectangle::rectangle(int x1, int y1, int x2, int y2)
{
    m_p1.SetXY(x1, y1);
    m_p2.SetXY(x2, y2);
}
void rectangle::Setrectangle(int x1, int y1, int x2, int y2)
{
    m_p1.SetXY(x1, y1);
    m_p2.SetXY(x2, y2);
}
void rectangle::Showarea()
{
    int l1 = m_p2.Getx() - m_p1.Getx();
    int l2 = m_p2.Gety() - m_p1.Gety();
    cout << "面积为:" << l1 * l2 << endl;
}

int main()
{
    Point p1,p2;
    rectangle r1;
    int x1, y1, x2, y2;
    cout << "请输入矩形左下角和右上角坐标:";
    cin >> x1 >> y1 >> x2 >> y2;
    r1.Setrectangle(x1, y1, x2, y2);
    r1.Showarea();
    system("pause");
    return 0;
}