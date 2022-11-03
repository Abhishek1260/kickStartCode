#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int search(int arr[], int n, int curr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

bool myCompare(int x, int y)
{
    return x > y;
}

void solve()
{
    int n, s;
    cin >> n >> s;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = s;
    sort(arr, arr + n + 1, myCompare);
    int midElement = (n + 1) / 2 - 1;
    int pos = search(arr, n + 1, s);
    cout << abs(pos - midElement) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}