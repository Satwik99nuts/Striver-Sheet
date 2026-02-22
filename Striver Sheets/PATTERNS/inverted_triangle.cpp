#include<bits/stdc++.h>
using namespace std;

void inv_tri(int n){
    for(int i = n; i>=1;i--){
        for(int j = 0; j<i; j++){
            cout<<"#";
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Write the value of n = ";
    cin>>n;
    inv_tri(n);
    return 0;
}