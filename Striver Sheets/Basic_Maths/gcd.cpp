#include <bits/stdc++.h>
using namespace std;

int gcdValue(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcdValue(a, b) << '\n';
    return 0;
}
