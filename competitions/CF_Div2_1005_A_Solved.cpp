#include <bits/stdc++.h>
#include <cstdint>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define nl "\n"
#define pb push_back
#define fr(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define read(x) int x; cin >> x
#define bigint int64_t
#define first f
#define second s
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i=0, count = 0, turn = 0;

    while (i<n) {
        if (s[i] == '0') {
            if (turn == 1) count++;
            while(s[i]=='0') i++;
            if (i<n) {
                count++;
                turn = 1;
            }
            
        } else if (s[i] =='1') {
            if (turn == 0) count++;
            while(s[i]=='1') i++;
            if (i<n) {
                count++;
                turn = 0;
            }
        }
    }

    cout << count << endl;
}



int main() {
    init_code();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}