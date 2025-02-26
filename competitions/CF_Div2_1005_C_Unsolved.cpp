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
    vector<int> arr(n);
    int total = 0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        total += arr[i];
    }
    int l=0, r=n-1, coins = 0;

    while (l<=r) {
        if (arr[l] >= 0) {
            coins += arr[l];
            total -= arr[l];
            l++;
        } else if (arr[r] < 0) {
            coins += abs(arr[r]);
            total -= abs(arr[r]);
            r--;
        } else {
            if (total-arr[l] >= arr[l]) {
                total -= arr[l];
                l++;
            } else {
                total -= abs(arr[r]);
                r--;
            }
        }
    }

    cout << coins << nl;
}



int main() {
    init_code();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}