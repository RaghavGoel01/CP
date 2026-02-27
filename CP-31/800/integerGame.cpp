#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n) {
    if((n % 3 == 1) || (n % 3 == 2)) cout << "First" << endl;
    else cout << "Second" << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}