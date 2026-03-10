#include<bits/stdc++.h>
using namespace std;

int i;
void all_div(int n){
    // int div = 0;
    for(i = 0;i<=n;i++){
        if(n%i ==0){
            cout<<i;
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Write the number : ";
    cin>>n;
    all_div(n);
    return 0;
}