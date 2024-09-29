#include<iostream>

using namespace std;
class Complex
{
private:
    double m_real;
    double m_imag;
public:
    Complex()
    {
        m_real = 0;
        m_imag = 0;
    }
    Complex(double real, double imag)
    {
        m_real = real;
        m_imag = imag;
    }
    Complex(const Complex& s1 )
    {
        m_real = s1.m_real;
        m_imag = s1.m_imag;
    }
    void add(const Complex& s1)
    {
        m_real += s1.m_real;
        m_imag += s1.m_imag;
    }

    void show()
    {
        cout << m_real << "+" << m_imag << "i" << endl;
    }
};

int main()
{
    Complex c1(1,2);
    Complex c2;
    Complex c3(c1);
    c3.add(c1);
    c3.show();
    system("pause");
    return 0;
}