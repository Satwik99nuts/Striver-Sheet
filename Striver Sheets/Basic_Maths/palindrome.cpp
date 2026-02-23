#include<bits/stdc++.h>
using namespace std;

int check_palindrome(int n){
    int orig = n;
    int rev_num = 0;
    while(n>0){
        int ld = n%10;
        rev_num = rev_num*10 + ld;
        n = n/10;
    }
    if(rev_num==orig){
        cout<<"It's a palindrome";
    }
    else{
        cout<<"it's not a palindrome";
    }
    return rev_num==orig;
}

int main(){
    int n;
    cout<<"Write the value of n = ";
    cin>>n;
    cout<<check_palindrome(n)<<"\n";
    return 0;
}