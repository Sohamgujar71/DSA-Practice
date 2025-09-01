#include<bits/stdc++.h>
using namespace std;

 
void PrintName(int n,int i){

    if(n<i){            //base case
        return;
    }
    cout<<n<<" ";
    PrintName(n-1,i);

}
int main(){
    int n;
    cin>>n;
    PrintName(n,1);

}