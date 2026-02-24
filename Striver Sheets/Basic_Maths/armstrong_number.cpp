#include <bits/stdc++.h>
using namespace std;

int arm_num(int n)
{
    int orig = n;
    int sum = 0;
    int k = to_string(orig).size();
    while (n > 0)
    {
        int ld = n % 10;
        sum += (int)pow(ld,k);
        n = n / 10;
    }
    if(sum == orig){
        cout<<"It's an armstrong number";
    }
    else{
        cout<<"It's not an armstrong number";
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