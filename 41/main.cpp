#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
    bool flag = false;
    int size = s.size();
    for (int i = 0; i < size / 2; i++)
    {
        if (s[i] == s[size - i - 1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        for (int i = 0; i < s.size() - 5; i++)
        {
            if (isPalindrome(s.substr(i, 5)))
            {
                cout << "NOT POSIBLE" << endl;
            }
            else
            {
                cout << "possible" << endl;
            }
        }
    }

    return 0;
}