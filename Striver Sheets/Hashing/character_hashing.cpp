#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Write the string: ";
    cin>>s;
    
    int hash[26]={0};
    for(size_t ch = 0; ch < s.size(); ch++){
        if (s[ch] >= 'a' && s[ch] <= 'z') {
            hash[s[ch]-'a']++;
        }
    }
    int q;
    cout<<"write the number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        if (c >= 'a' && c <= 'z') {
            cout << hash[c-'a'] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
