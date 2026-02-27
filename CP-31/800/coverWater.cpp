#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n, string s) {
    int ans = 0;
    string ptn = "...";
    if(s.find(ptn) != string::npos) {
        cout << "2" << endl;
        return;
    }
    else {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '.') 
                ans++;
        }
    }
    cout << ans << endl;
    
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n, s);
    }
    return 0;
}