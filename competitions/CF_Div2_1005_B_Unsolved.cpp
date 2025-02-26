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
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int l=0, r=n-1;
    while(l<r) {
        if (arr[l] != arr[r]) break;
        if (l+1 < r && arr[l] == arr[l+1]) l++;
        else if (r-1 > l && arr[r] == arr[r-1]) r--;
        else break;
    }

    if (l+1 == r) cout << 0 << nl;
    else if (l == r || (l==0 && r==n-1 && arr[l] != arr[r])) cout << l+1 << " " << r+1 << nl;
    else cout << l+2 << " " << r << nl;
}



int main() {
    init_code();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}