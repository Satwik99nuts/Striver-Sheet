#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cout<<"Enter the number of queries"<<endl;
    cout<<"Enter the numbers you want to search"<<endl;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}