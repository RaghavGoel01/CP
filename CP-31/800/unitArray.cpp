#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int>& v) {
    int ans = 0;
    int posone = 0, negone = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 1) posone++;
        else negone++;
    }
    if(negone > posone) {
        int need = (negone - posone + 1) / 2;
        ans += need;
        posone += need;
        negone -= need;
    }
    if(negone % 2 != 0) {
        ans++;
    }
    cout << ans << endl;
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
        for(auto &it:v) {
            cin >> it;
        }
        solve(v);
    }
    return 0;
}