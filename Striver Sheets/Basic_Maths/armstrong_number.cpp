#include <bits/stdc++.h>
using namespace std;

int arm_num(int n)
{
    int orig = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        int rev_num = rev_num * 10 + (ld * ld * ld);
        n = n / 10;
    }
    return sum == orig;
}

int main()
{
    int n;
    cout<<"Write the number n = ";
    cin>>n;
    cout<<arm_num(n)<<"\n";
    return 0;
}