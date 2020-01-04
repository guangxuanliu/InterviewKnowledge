#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

bool equal(float f1,float f2)
{
    return abs(f1 - f2) <= 1e-6;
}

int main()
{
    float epsilon = 0.001;
    float f1 = 3.1415926;
    float f2 = 3.1415927;

    cout << boolalpha << equal(f1,f2) << endl;

    return 0;
}
