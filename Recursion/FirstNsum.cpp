#include<bits/stdc++.h>
using namespace std;

 
// void FirstNSum(int n,int sum){

//     if(n<1){            //base case
//         cout<<sum<<endl;
//         return;
//     }
//     FirstNSum(n-1,sum+n);
// }

int FirstNSum(int n){

    if(n==0){            //base case
        return 0;
    }
    return n+FirstNSum(n-1);
}


int main(){
    int n;
    cin>>n;
    cout<<FirstNSum(n);
}
