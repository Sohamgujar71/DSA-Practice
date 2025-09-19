#include<bits/stdc++.h>
using namespace std;

void Rotate(int n,int arr[]){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Rotate(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}