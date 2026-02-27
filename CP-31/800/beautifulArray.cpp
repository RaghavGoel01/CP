#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<ll> &v) {
    sort(v.begin(), v.end(), greater<ll>());
    if(v[0] == v[v.size() - 1]) {
        cout << "NO" << '\n';
        return;
    }
    else {
        cout << "YES" << '\n';
        if(v[0] == v[1]) {
            swap(v[1], v[v.size() - 1]);
        }
        for(auto &x: v) {
            cout << x << " ";
        }
        cout << '\n';
    }
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