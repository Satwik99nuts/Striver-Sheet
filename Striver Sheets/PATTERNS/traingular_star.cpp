#include<bits/stdc++.h>
using namespace std;

// space, star, space
void triangular_star(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"$";
        }
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void inv_tri_star(int m){
    for(int i =0;i<m;i++){
        for(int j = 0;j<=i;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*m-(2*i+1);j++){
            cout<<"#";
        }
        for(int j = 0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    triangular_star(5);
    inv_tri_star(5);
    return 0;
}