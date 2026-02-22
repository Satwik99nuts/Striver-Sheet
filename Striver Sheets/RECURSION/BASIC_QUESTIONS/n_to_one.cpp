#include<bits/stdc++.h>
using namespace std;

void n_to_one(int n,int i){
    if(i<1) return;
    cout<< i <<" ";
    n_to_one(n,i-1);

}

int main(){
    int n;
    cout<<"Write the value of n : ";
    cin>>n;

    n_to_one(n,n);

    return 0;
}