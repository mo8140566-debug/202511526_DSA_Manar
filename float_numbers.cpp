#include <iostream>

using namespace std;

float add(float n1, float n2, float n3, float n4)
{
    return n1+n2+n3+n4;
}

int main()
{
    float result;
    result = add(1.1, 2.2, 3.3, 4.4);

    cout << "Sum = " << result << endl;

    return 0;
}
