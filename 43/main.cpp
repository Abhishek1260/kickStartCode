#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        double area = 0;
        int radius, A, B;
        cin >> radius >> A >> B;
        area += radius * radius * M_PI;
        while (radius != 0)
        {
            radius = radius * A;
            area += radius * radius * M_PI;
            radius = radius / B;
            area += radius * radius * M_PI;
        }
        printf("Case #%d: %.6f\n", T + 1, area);
    }

    return 0;
}