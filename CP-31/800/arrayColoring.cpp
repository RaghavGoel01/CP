#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int>& v) {
    ll sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    if(sum % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<int> v(n, 0);
        for(auto &it: v) {
            cin >> it;
        }
        solve(v);
    }
    return 0;
}