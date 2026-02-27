#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n, int k) {
    if(n % 2 == 0) {
        cout << "YES" << endl;
        return;
    }
    else {
        while(n > 0) {
            n -= k;
            if(n % 2 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}