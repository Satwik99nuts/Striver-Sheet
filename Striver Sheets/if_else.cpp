#include<bits/stdc++.h>
using namespace std;

void pn(string name){
    cout<<"Namaste "<<name<<endl;
}

int sum(int a,int b){
    int c = a+b;
    return c;
}
// pass by value
void dosomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
// pass by reference
void iamsomething(string &s){
    s[0]='A';
    cout<<s<<endl;
}

void loop(int arr[], int n){
    arr[0]+=100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}
int main(){
    // string name;
    // cout << "Write Your Name : " << endl;
    // cin >> name;
    // pn(name);

    // string name1;
    // cout << "Write Another Name : " << endl;
    // cin>>name1;
    // pn(name1);

    // int num1,num2;
    // cout<<"Write the value of a and b"<<num1<<num2<<endl;
    // cin>>num1>>num2;
    // int res = sum(num1,num2);
    // cout<<res;

    // int num = 10;
    // dosomething(num);
    // cout<<num<<endl;

    // string s = "Satwik";
    // iamsomething(s);
    // cout<<s<<endl;

    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    loop(arr,n);
    cout<<"Value inside int main : "<<arr[0]<<endl;


    return 0;
}