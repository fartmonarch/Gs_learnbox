#include <iostream>
#include <string>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

// CPU类
class CPU
{
public:
    CPU(CPU_Rank rank, int frequency, float voltage) 
        : m_rank(rank), m_frequency(frequency), m_voltage(voltage) {}

    ~CPU() {} 

    void display() const
    {
        cout << "CPU Rank: " << m_rank 
             << ", Frequency: " << m_frequency << " GHz"
             << ", Voltage: " << m_voltage << " V" << endl;
    }

private:
    CPU_Rank m_rank;      // CPU等级
    int m_frequency;      // CPU频率（GHz）
    float m_voltage;      // CPU电压（V）
};

// ROM类
class ROM
{
public:
    ROM(int capacity) : m_capacity(capacity) {}

    ~ROM() {} 

    void display() const
    {
        cout << "ROM Capacity: " << m_capacity << " GB" << endl;
    }

private:
    int m_capacity; // ROM容量（GB）
};

// CDROM类
class CDROM
{
public:
    CDROM(int capacity) : m_capacity(capacity) {} // 使用容量初始化

    ~CDROM() {} 

    void display() const
    {
        cout << "CDROM Capacity: " << m_capacity << " GB" << endl; // 修改为显示容量
    }

private:
    int m_capacity; // CDROM容量（GB）
};

// Computer类
class Computer
{
public:
    Computer(const CPU& cpu, const ROM& rom, const CDROM& cdrom)
        : m_cpu(cpu), m_rom(rom), m_cdrom(cdrom) {}

    ~Computer() {} // 析构函数

    void display() const
    {
        cout << "Computer Specifications:" << endl;
        m_cpu.display();
        m_rom.display();
        m_cdrom.display();
    }

private:
    CPU m_cpu;       // CPU对象
    ROM m_rom;       // ROM对象
    CDROM m_cdrom;   // CDROM对象
};

// 主函数
int main()
{
    CPU myCPU(P3, 3, 1.2f); 
    ROM myROM(256);
    CDROM myCDROM(1); 

    Computer myComputer(myCPU, myROM, myCDROM);
    myComputer.display();
    system("pause");

    return 0;
}
