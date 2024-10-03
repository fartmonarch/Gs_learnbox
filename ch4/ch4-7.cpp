#include <iostream>

using namespace std;
// 需要用到vs 在vscode中运行不成功
class intarr
{
public:
    intarr(int size) : m_size(size)
    {
        for (int i = 0; i < m_size; i++)
        {
            m_a[i] = 0;
        }
    }

    void setvalues(int value, int j)
    {
        m_a[j] = value;
    }

    void display()
    {
        for (int i = 0; i < m_size; i++)
        {
            cout << m_a[i] << ' ';
        }
        cout << endl;
    }

    void showsum()
    {
        int sum = 0;
        for (int i = 0; i < m_size; i++)
        {
            sum += m_a[i];
        }
        cout << "各个元素之和为：" << sum << endl;
    }

    void showaverage()
    {
        int sum = 0;
        for (int i = 0; i < m_size; i++)
        {
            sum += m_a[i];
        }
        cout << "平均值为：" << static_cast<float>(sum) / m_size << endl;
    }

    void showmax()
    {
        int max = m_a[0];
        for (int i = 1; i < m_size; i++)
        {
            max = m_a[i] > max ? m_a[i] : max;
        }
        cout << "最大值为：" << max << endl;
    }

    void showmin()
    {
        int min = INT_MAX;
        for (int i = 0; i < m_size; i++)
        {
            min = m_a[i] < min ? m_a[i] : min;
        }
        cout << "最小值为：" << min << endl;
    }

    ~intarr() {}

private:
    int m_a[10];
    int m_size;
};

int main()
{
    int n;
    cout << "请输入您要输入几个数（最大10个）：";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "请输入一个在 1 到 10 之间的数字！" << endl;
        return 1;
    }

    intarr a(n);
    cout << "请输入要输入数组的整数：";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        a.setvalues(value, i);
    }

    a.display();
    a.showsum();
    a.showaverage();
    a.showmax();
    a.showmin();

    return 0;
}
