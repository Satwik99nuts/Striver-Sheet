// #include <bits/stdc++.h>
// using namespace std;

// int count_digits(int n)
// {
//     if (n == 0)
//         return 1;
//     n = abs(n);
//     int count = 0;
//     while (n > 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     long long n;
//     cout<<"Write the value of n = ";
//     cin>>n;
//     cout<<count_digits(n)<<"\n";
//     return 0;
// }

// for digits more than 10
#include <bits/stdc++.h>
using namespace std;

int count_digits(const string &n)
{
    int count = 0;
    for (char c : n)
    {
        if (isdigit(c))
            count++;
    }
    return count;
}

int main()
{
    string n;
    cout << "Write the value of n = ";
    cin >> n;
    cout << count_digits(n) << "\n";
    return 0;
}