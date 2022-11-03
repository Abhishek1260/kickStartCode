#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjm(n + 1, vector<int>(n + 1, 0));
    int x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    cout << "Showing the matrix" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }

    int node1 = 3;
    int node2 = 7;
    if (adjm[node1][node2] == 1)
    {
        cout << "There is a node" << endl;
    }
    else
    {
        cout << "There is no node" << endl;
    }

    return 0;
}