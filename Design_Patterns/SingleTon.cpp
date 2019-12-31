#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SingleTon
{
public:
    static SingleTon& getInstance()
    {
        static SingleTon m_instance;
        return m_instance;
    }

private:
    SingleTon();

};

int main()
{

    return 0;
}
