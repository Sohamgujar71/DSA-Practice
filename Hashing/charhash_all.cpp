#include<bits/stdc++.h>
using namespace std;

//for only lowercase letters

int main(){
    string s;
    cin>>s;

    //pre compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    char c;
    cin>>c;
    //fetch
    cout<<hash[c];
}