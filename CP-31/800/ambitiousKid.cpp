#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> v) {
    int mini = 1e9;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 0) {
            cout << "0" << endl;
            return;
        }
        mini = min(mini, abs(v[i]));
    }
    cout << mini << endl;
    
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v);
    }
    return 0;
}