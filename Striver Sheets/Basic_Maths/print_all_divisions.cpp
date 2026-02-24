#include<bits/stdc++.h>
using namespace std;

void all_div(int n){
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
//                    OR                      //
// void all_div(int n)
// {
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//             if (i != n / i)
//                 cout << n / i << " ";
//         }
//     }
// }
int main(){
    int n;
    cout<<"Write the number n : ";
    cin>>n;
    all_div(n);
    return 0;
}