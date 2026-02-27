#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n, int k, vector<int> v) {
    if(k >= 2) {
        cout << "YES" << endl;
    }    
    else {
        bool isSorted = true;
        for(int i = 0; i < n-1; i++) {
            if(v[i] > v[i+1]) {
                isSorted = false;
                break;
            }
        if(isSorted) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        solve(n, k, v);
    }
    return 0;
}