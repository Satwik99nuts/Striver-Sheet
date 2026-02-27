#include<bits/stdc++.h>
using namespace std;

int summ(int n){
    if(n==0) return 0;
    else return n+ summ(n-1);
}

int main(){
    int n = 3;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<summ(n);
    return 0;
}