#include<bits/stdc++.h>
using namespace std;

 
void BackRev(int i,int n){

    if(i>n){            //base case
        return;
    }
    BackRev(i+1,n);
    cout<<i<<" ";

}
int main(){
    int n;
    cin>>n;
    BackRev(1,n);

}