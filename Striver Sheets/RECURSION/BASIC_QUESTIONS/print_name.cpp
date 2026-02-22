#include <bits/stdc++.h>
using namespace std;

void print_name(int n)
{
    if (n == 5)
    {
        return;
    }
    cout<<"Satwik"<<endl;
    print_name(n + 1);
}

int main()
{
    print_name(0);
    return 0;
}