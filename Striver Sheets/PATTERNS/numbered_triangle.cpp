#include<bits/stdc++.h>
using namespace std;
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void numb_tri(int n){
    int numb = 1;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<numb<<" ";
            numb+=1;
        }
        cout << endl;
    }
}
void alpha_tri(int m){
    for(int i =1;i<=m;i++){
        for(char alpha='A'; alpha<='A'+i; alpha++){
            cout<<alpha;
        }
        cout<<endl;
    }
}

void rev_alpha_tri(int a){
    for(int i = 1;i<=a;i++){
        for(char j ='A';j<='A'+(a-i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    numb_tri(5);
    cout<<endl;
    alpha_tri(5);
    cout << endl;
    rev_alpha_tri(5);
    return 0;
}