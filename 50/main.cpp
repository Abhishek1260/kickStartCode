#include <iostream>
using namespace std;
#include <vector>

int min(vector<int> v, int start, int end)
{
    int minEle = v[start];
    for (int i = start; i <= end; i++)
    {
        if (minEle > v[i])
        {
            minEle = v[i];
        }
    }
    return minEle;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    int ptr1 = 0;
    int ptr2 = a.size() - 1;
    int max = 0;
    int area = 0;

    while (ptr1 != ptr2)
    {
        area = (ptr2 - ptr1 + 1) * (min(a, ptr1, ptr2));
        if (area > max)
        {
            max = area;
        }
        if (a[ptr1] > a[ptr2])
        {
            ptr2--;
        }
        else if (a[ptr1] < a[ptr2])
        {
            ptr1++;
        }
        else
        {
            ptr1++;
            ptr2--;
        }
    }
    cout << max << endl;
}

int main()
{
    int t;
    int i = 0;
    cin >> t;
    while (t--)
    {
        i++;
        cout << "Case #" << i << ": ";
        solve();
    }
}