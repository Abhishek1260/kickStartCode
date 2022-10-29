#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    int value;
    cin >> value;
    vector<int> v;
    while (value > 0)
    {
        int remainder = value % 10;
        v.push_back(remainder);
        value = value / 10;
    }

    int maxEle = v[0];
    int maxIdx = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if (maxEle < v[i])
        {
            maxEle = v[i];
            maxIdx = i;
        }
    }

    int temp = v[v.size() - 1];
    v[v.size() - 1] = maxEle;
    v[maxIdx] = temp;

    int ans = 0;
    cout << pow(10, 0) << endl;
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i] * pow(10, i);
    }

    cout << ans + 1;

    return 0;
}