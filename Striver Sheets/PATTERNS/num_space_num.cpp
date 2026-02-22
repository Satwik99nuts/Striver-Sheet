#include<bits/stdc++.h>
using namespace std;

void num_space_num(int n){
    cout<<"Write the value of n: "<<endl;
    cin>>n;
    int space = 2*(n-1);
    for(int i = 0;i<=n;i++){
        for(int j =0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
        for(int j = 0;j<=space;j++){
            cout<<" ";
        }

        for(int j = i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}

int main(){
    num_space_num(5);
    return 0;
}
