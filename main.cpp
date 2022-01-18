#include <iostream>

class Numbers
{
public:
    int m_f;
    int m_s;

    void set(int f,int s)
    {
        m_f = f;
        m_f = s;
    }

    void print()
    {
        std::cout << "Numbers (" << m_f << ", " << m_s << ")\n";
    }
};

int main()
{
    Numbers n1;
    n1.set(3, 3);

    Numbers n2{ 4, 4};

    n1.print();
    n2.print();

    return 0;
}
