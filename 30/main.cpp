#include <iostream>
using namespace std;

bool isPalindrome(int x, int flag)
{
    if (flag == 1)
    {
        return false;
    }
    int temp = x;
    int rev = 0;
    int rem = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (x == rev)
    {
        return true;
    }
    return false;
}

int main()
{

    int x;
    cin >> x;

    int flag = 0;
    if (x < 0)
    {
        x *= -1;
        flag = 1;
    }

    if (isPalindrome(x, flag))
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }

    return 0;
}