#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll x, ll k) {
    if(x % k != 0) {
        cout << 1 << '\n';
        cout << x << '\n';
    }
    else {
        cout << 2 << '\n';
        cout << (x - 1) << " " << 1 << '\n';
    }
}   

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        ll x, k;
        cin >> x >> k;
        solve(x, k);
    }
    return 0;
}