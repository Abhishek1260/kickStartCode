#include <iostream>
#include <vector>
#define pb push_back
#define min(A, B) (A < B ? A : B)
using namespace std;

int main()
{

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> v;
    for (int i = 0; i < sizeof(height) / sizeof(height[0]); i++)
    {
        v.pb(height[i]);
    }

    int size = v.size();
    cout << size << endl;

    int start = 0;
    int end = size - 1;

    int maxArea = 0;

    while (start != end)
    {
        int area = (end - start) * min(height[start], height[end]);
        if (height[start] > height[end])
        {
            end--;
        }
        else if (height[start] < height[end])
        {
            start++;
        }
        else if (height[start] == height[end])
        {
            start++;
            end--;
        }
        if (area > maxArea)
        {
            maxArea = area;
        }
    }

    cout << maxArea << endl;

    return 0;
}