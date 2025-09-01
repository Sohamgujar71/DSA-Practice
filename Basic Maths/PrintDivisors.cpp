#include<bits/stdc++.h>
using namespace std;

void PrintDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

void EfficientDivi(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
                if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    // PrintDivisors(n);
    EfficientDivi(n);
}