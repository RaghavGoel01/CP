#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int k, vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == k) {
            cout << "YES" << endl;
            return;
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        for(auto &it: v){
            cin >> it;
        }
        solve(k, v);
    }
    return 0;
}