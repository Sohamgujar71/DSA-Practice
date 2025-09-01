#include<bits/stdc++.h>
using namespace std;

//Brute Force    TC=O(n)
void isPrime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"Prime"<<endl;
    }else cout<<"Not Prime"<<endl;

}

//Efficient     TC=O(sqrt(n))
void isEffiPrime(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout<<"Prime"<<endl;
    }else cout<<"Not Prime"<<endl;

}

int main(){
    int n;
    cin>>n;
    isPrime(n);
}