#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<ll> v) {
    ll ans = 0;
    ll minDiff = 1e9;
    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] <= v[i+1]) {
            minDiff = min(minDiff, v[i+1] - v[i]);
        }
        else {
            cout << "0" << endl;
            return;
        }
    }    
    ans = (minDiff / 2) + 1;
    cout << ans << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n, 0);
        for(auto &it: v) {
            cin >> it;
        }
        solve(v);
    }
    return 0;
}