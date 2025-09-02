#include<bits/stdc++.h>
using namespace std;

// void fibonacci(int n){
//     int f1=0;
//     int f2=1;
//     int c;
//     if(n==0) cout<<f1<<endl;
//     else if(n==1) cout<<f2<<endl;
//     else{
//         for(int i=2;i<=n;i++){
//             c=f1+f2;
//             f1=f2;
//             f2=c;
//         }
//         cout<<f2;
//     }
// }

int f(int n){       //multiple recursions
    if(n<=1){
        return n;
    }else{
        int last=f(n-1);
        int slast=f(n-2);
        return last+slast;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
}