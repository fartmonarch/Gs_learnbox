#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class employee
{
    public:
        employee()
        :m_individualEmpNo(0), m_grade(0), m_accumPay(0.0) {}
        employee(int individualEmpNO, int grade, float accumPay)
            : m_individualEmpNo(individualEmpNO), m_grade(grade), m_accumPay(accumPay) {}

        ~employee() {}

        void increaseEmpNO(int step)
        {
            m_individualEmpNo = step;
        }

        void promote(int increment)
        {
            m_grade = increment;
        }

        void Setaccumpay(float pa)
        {
            m_accumPay = pa;
        }

        void display()
        {
            cout << "m_individualEmpNo: " << m_individualEmpNo << endl;
            cout << "m_grade: " << m_grade << endl;
            cout << "m_accumPay: " << m_accumPay << endl;
        }

        int GetindividualEmpNo()
        {
            return m_individualEmpNo;
        }

        int Getgrade()
        {
            return m_grade;
        }

        float GetaccumPay()
        {
            return m_accumPay;
        }



    private:
        int m_individualEmpNo;
        int m_grade;
        float m_accumPay;
};

int main()
{
    employee s1;
    int NO, grade;
    float accumpay;

    cout << "请输入雇员编号，级别，月薪" << endl;
    cin >> NO >> grade >> accumpay;
    s1.increaseEmpNO(NO);
    s1.promote(grade);
    s1.Setaccumpay(accumpay);

    cout << "当前雇员编号,级别,月薪为:";
    cout << s1.GetindividualEmpNo() << ' ';
    cout << s1.Getgrade() << ' ';
    cout << s1.GetaccumPay() << endl;
    system("pause");
}