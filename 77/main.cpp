#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    priority_queue<int, vector<int>> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " ";

    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(3);
    pqm.push(1);
    pqm.push(2);
    cout << pqm.top() << " ";
    pqm.pop();
    cout << pqm.top() << " ";

    return 0;
}