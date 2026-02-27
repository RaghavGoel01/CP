#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n, vector<int>& v) {
    ll sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    cout << (-1 * (sum)) << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n-1, 0);
        for(auto &it: v) {
            cin >> it;
        }
        solve(n, v);
    }
    return 0;
}