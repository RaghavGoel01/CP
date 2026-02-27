#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n , int m, string x, string s) {
    int ans = 0;
    for(int i = 0; i < 6; i++) {
        if(x.find(s) != string::npos) {
            cout << ans << endl;
            return;
        }
        else {
            x = x + x;
            ans++;
        }
    }
    cout << "-1" << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        solve(n, m, x, s);
    }
    return 0;
}