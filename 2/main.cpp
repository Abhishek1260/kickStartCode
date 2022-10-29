#include <iostream>
#include <algorithm>
using namespace std;

bool myComaprator(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{

    pair<int, int> p[8];

    int ele;
    for (int i = 0; i < 8; i++)
    {
        cin >> ele;
        p[i].first = ele;
        p[i].second = i;
    }

    sort(p, p + 8, myComaprator);
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        arr[p[i].second] = i;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}