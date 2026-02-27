#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<ll>& v) {
    ll total_xor = 0;
    for(int i = 0; i < v.size(); i++) {
        total_xor ^= v[i];
    }
    if(v.size() % 2 != 0) cout << total_xor << endl;
    else {
        if(total_xor == 0) {
            cout << total_xor << endl;
        }
        else cout << "-1" << endl;
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> v(n, 0);
        for(auto &it: v) {
            cin >> it;
        }
        solve(v);
    }
    return 0;
}