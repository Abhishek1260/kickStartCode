#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " << endl;
    }

    cout << endl;
    v1.pop_back();

    vector<int>::iterator i1;
    for (i1 = v1.begin(); i1 != v1.end(); i1++)
    {
        cout << *i1 << endl;
    }

    cout << endl;
    v1.pop_back();

    for (auto element : v1)
    {
        cout << element << endl;
    }

    return 0;
}