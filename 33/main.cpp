#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<char, int> mp{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    return 0;
}