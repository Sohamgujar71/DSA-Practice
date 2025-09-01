#include<bits/stdc++.h>
using namespace std;

//TC=O(min(n1,n2))
void FindGCD(int n1,int n2){
    int gcd=1;
        for(int i=1;i<=min(n1,n2);i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        cout<<gcd;
    }


//Faster but still same TC according to worst case
void EffiFindGCD(int n1,int n2){
        for(int i=min(n1,n2);i>=i;i--){
            if(n1%i==0 && n2%i==0){
                cout<<i;
                break;
            }
        }
}

//More Faster using euclidean algorithm
// TC=O(log(min(a,b)))
void EucliFindGCD(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2)   n1=n1%n2;
        else        n2=n2%n1;
    }
    if(n1==0)   cout<<n2<<endl;
    else        cout<<n1<<endl;
}


int main(){
int n1,n2;
cin>>n1>>n2;
EucliFindGCD(n1,n2);

}