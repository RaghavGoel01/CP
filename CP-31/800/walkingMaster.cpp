#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll a, ll b, ll c, ll d) {
    if(d < b) {
        cout << -1 << '\n';
        return;
    }    
    else if (d == b) {
        if(a >= c) {
            cout << (a - c) << '\n';
            return;
        }
        else {
            cout << -1 << '\n';
        }
    }
    else {
        if(c > a + (d - b)) {
            cout << -1 << '\n';
        }
        else {
            cout << (2*(d - b) + (a - c)) << '\n';
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
    }
    return 0;
}