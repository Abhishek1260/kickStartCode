#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int N, M;
        cin >> N >> M;
        int sum;
        int ele;
        for (int i = 0; i < N; i++)
        {
            cin >> ele;
            sum += ele;
        }
        int ans = sum % M;
        cout << "Case #" << T + 1 << ": " << ans << endl;
    }

    return 0;
}