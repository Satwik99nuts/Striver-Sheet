#include<bits/stdc++.h>
using namespace std;

// Character Hashing (ASCII based)
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    // hash[ch] will store frequency of character ch
    int hash[256]={0};

    // Pre-computation: count frequency of each character in s
    for(int i=0;i<s.size();i++){
        hash[(unsigned char)s[i]]++;
    }

    int q;
    cout<<"How many queries? ";
    cin>>q;

    // For each query character, print its frequency
    while(q--){
        char c;
        cout<<"Enter character to find frequency: ";
        cin>>c;

        cout<<"Frequency of '"<<c<<"' is "<<hash[(unsigned char)c]<<"\n";
    }

    return 0;
}
