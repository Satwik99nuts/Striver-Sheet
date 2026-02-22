#include<bits/stdc++.h>
using namespace std;

void right_num(int n){
    for(int i = 1; i<=n;i++){ //i is for outer column and j is for inner row
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }
}
void r_num(int k){
    for(int i = 1; i<=k;i++){
        for(int j =1; j<=i;j++){
            cout<<i;
        }
    cout<<endl;
    }
}

void ri_num(int t){
    for(int i = 1; i<=t ;i++){
        for(int j = 1; j<=t-i+1; j++){
            cout<<j;
        }
    cout<<endl;
    }
}


int main(){
    right_num(5);
    cout<<endl;
    r_num(10);
    cout << endl;
    ri_num(5);
    return 0;
}