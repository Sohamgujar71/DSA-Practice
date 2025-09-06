#include<bits/stdc++.h>
using namespace std;

void second_largest(int arr[],int n){
    sort(arr,arr+n);
    while(arr[n-1]==arr[n-2]){
        n--;
    }
    cout<<"second largest:"<<arr[n-2];
    
}

void b_second_largest(int arr[],int n){         //better
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest){
        largest=arr[i];
    }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>slargest&&arr[i]<largest){
            slargest=arr[i];
        }
    }
    cout<<"second largest:"<<slargest;
    
}

void best_second_largest(int arr[],int n){         //optimal
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
    }
    cout<<"second largest:"<<slargest;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    best_second_largest(arr,n);
}