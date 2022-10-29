#include <iostream>
using namespace std;

int main()
{

    __int32 val;
    cin >> val;
    __int32 rev = 0;
    int flag = 0;
    if (val < 0)
    {
        val = -1 * val;
        flag = 1;
    }
    while (val > 0)
    {
        int rem = val % 10;
        rev = rev * 10 + rem;
        val = val / 10;
    }
    flag == 1 ? cout << "-" << rev : cout << rev;
}