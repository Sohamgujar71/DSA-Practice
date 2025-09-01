#include <bits/stdc++.h>
using namespace std;

// void revArr(int arr[], int l, int r) {
//     if (l >= r) return; 
//     swap(arr[l], arr[r]);
//     revArr(arr, l + 1, r - 1);
// }

void revArr(int arr[], int i, int n) {
    if (i>=n/2) return; 
    swap(arr[i], arr[n-i-1]);
    revArr(arr, i + 1, n);
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    revArr(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
