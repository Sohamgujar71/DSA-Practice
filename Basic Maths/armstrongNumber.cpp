#include<bits/stdc++.h>
using namespace std;

void armstgNum(int x){
    int sum=0;
    int original=x;
    int c=log10(x)+1;
    while(x>0){
        int ld=x%10;
        sum=sum+(pow(ld, c));
        x=x/10;
    }
    if(sum==original) {
        cout<<"true";
    }
    else {cout<<"false";}
}

int main(){
    int x;
    cin>>x;
    armstgNum(x);
}
