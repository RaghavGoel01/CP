#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n, int x, vector<int> v) {
    int capacity = v[0];
    int diff = 0;
    v.push_back(x);
    n = v.size();
    for(int i = 0; i < n-1; i++) {
        diff = v[i+1] - v[i];
        capacity = max(capacity, diff);
    }
    capacity = max(capacity, 2 * (x - v[n-2]));
    cout << capacity << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(n, x, v);
    }
    return 0;
}