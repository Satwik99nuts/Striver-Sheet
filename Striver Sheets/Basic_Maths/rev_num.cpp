#include<bits/stdc++.h>
using namespace std;

int rev_num(int n){

    int rev_digits = 0;
    while(n>0){
        int last_digit = n%10;
        rev_digits = rev_digits*10+last_digit;
        n = n/10;
    }
    return rev_digits;
}

int main(){
    int n;
    cout<<"Write the value of n = ";
    cin>>n;
    cout<<rev_num(n)<<"\n";
    return 0;
}