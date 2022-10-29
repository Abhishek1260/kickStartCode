#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        string name;
        cin >> name;
        string ruler;
        bool flag = false;
        if (name[name.size() - 1] == 'y' || name[name.size() - 1] == 'Y')
        {
            flag = true;
        }
        if (name[name.size() - 1] == 'a' || name[name.size() - 1] == 'e' || name[name.size() - 1] == 'i' || name[name.size() - 1] == 'o' || name[name.size() - 1] == 'u')
        {
            ruler = "Alice";
        }
        else
        {
            ruler = "Bob";
        }
        if (flag)
        {
            ruler = "nobody";
        }

        cout << "Case #" << T + 1 << ": " << name << " is ruled by " << ruler << "." << endl;
    }

    return 0;
}