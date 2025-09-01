#include <bits/stdc++.h>
using namespace std;

bool isPalin(int i,string &s) {
    if (i >= s.size() / 2) return true;                     // base case
    if (s[i] != s[s.size() - i - 1]) return false;          // mismatch
    return isPalin(i+1, s);                               // recurse
}

int main() {
    string s;
    cin >> s;
    cout << (isPalin(0, s) ? "YES" : "NO");
}
