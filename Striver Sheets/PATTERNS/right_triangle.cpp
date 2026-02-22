#include<bits/stdc++.h>
using namespace std;

void right_triangle(int n){
    // cout<<"Write the valu of n: "<<endl;
    // cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<= i;  j++){
            cout<<"$";
        }
    cout<<endl;
    }
}

int main(){
    right_triangle(7);
    return 0;
}