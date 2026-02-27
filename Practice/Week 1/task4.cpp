#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cassert>
#include <iomanip>
#include <utility>
#include <limits>

using namespace std;

// Fast I/O
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

// Shortcuts
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

// Debugging (can be commented out in contest)
#define debug(x) cerr << #x << " = " << x << '\n';

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = 3.14159265358979323846;

// Utility Functions
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll power(ll a, ll b, ll m = MOD) {
    ll res = 1;
    a %= m;
    while(b) {
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'A') a++;
        else if(s[i] == 'D') d++;
    }
    if(a > d) cout << "Anton" << endl;
    else if(d > a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}
// Main function
int main() {
    fastio();
    int t = 1;
    // cin >> t; // Uncomment for multi-test cases
    while(t--) {
        solve();        // Your code here!
    }
    return 0;
}
