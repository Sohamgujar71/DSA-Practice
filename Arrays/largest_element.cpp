#include<bits/stdc++.h>
using namespace std;


void largest_element_1(int arr[],int n){
    sort(arr,arr+n);
    cout<<arr[n-1];
}

void largest_element(int arr[],int n){      //optimal 
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}



int main(){
int n;
cin>>n;
int arr[n];
//input
for(int i=0;i<n;i++){
    cin>>arr[i];
}
largest_element(arr,n);
}