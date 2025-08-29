#include<bits/stdc++.h>
using namespace std;

void Palindrome(int x){
    int revNum=0;
    int original=x;
    while(x>0){
        int ld=x%10;
        revNum=(revNum*10)+ld;
        x=x/10;
    }
    if(revNum==original){
        cout<<"true";
    }else cout<<"false";

}


int main(){
int x;
cin>>x;
Palindrome(x);

}