#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n, vector<int> v) {
    if(v[0] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for(auto &it: v) {
            cin >> it;
        }
        solve(n, v);
    }
    return 0;
}