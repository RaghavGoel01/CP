#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n, vector<int> v) {
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) { // n
        mp[v[i]]++; // logn
        if(mp.size() >= 3) {
            cout << "No" << endl;
            return;
        }
    } // nlogn
    if(mp.size() == 1) {
        cout << "Yes" << endl;
    }
    else if(mp.size() == 2) {
        vector<int> frequencies;
        for(auto it: mp) {
            frequencies.push_back(it.second);
        }
        int freq1 = frequencies[0];
        int freq2 = frequencies[1];
        if((abs(freq1 - freq2) <= 1)) {
            cout << "Yes" << endl;
            return;
        }
        else
            cout << "No" << endl; 
            return;
    }
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(n, v);
    }
    return 0;
}

// tc - O(nlogn)
// sc - O(n+n) = O(2n) = O(n)