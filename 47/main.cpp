#include <iostream>
#include <deque>
#define pb push_back
#define pf push_front
using namespace std;

int main()
{

    deque<int> dq;
    dq.pb(1);
    dq.pb(2);
    dq.pf(3);
    dq.pf(4);

    for (auto i : dq)
    {
        cout << i << " ";
    }

    cout << endl;

    dq.pop_back();
    dq.pop_front();

    for (auto i : dq)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}