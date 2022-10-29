#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        double v, d;
        cin >> v >> d;
        const double g = 9.8;
        double ratio = (d * g) / (pow(v, 2));
        double angle = asin(ratio);
        double ans = angle / 2 * 180 / acos(0.0) / 2;
        printf("Case #%d: %.7f\n", T + 1, ans);
    }

    return 0;
}