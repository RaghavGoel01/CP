#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<string>& grid) {
    int ans = 0;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid.size(); j++) {
            if(grid[i][j] == 'X') {
                int col = min(j, 9-j);
                int row = min(i, 9-i);
                ans += min(row, col) + 1;
            }
        }
    }
    cout << ans << endl;;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        vector<string> grid(10);
        for(int i = 0; i < 10; i++) {
            cin >> grid[i];
        }
        solve(grid);
    }
    return 0;
}