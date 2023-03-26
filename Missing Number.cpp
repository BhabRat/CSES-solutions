#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int sum(int o[], ll k) {
    ll s = 0;
    for (int i = 0; i < k; i++) {
        s += o[i];
    }
    return s;
}

int main() {
    ll l;
    cin >> l;
    int n[l-1];
    for (int i = 0; i < l-1; i++) {
        cin >> n[i];
    }
    int expected_sum = l * (l + 1) / 2;
    int actual_sum = sum(n, l-1);
    int missing_num = expected_sum - actual_sum;
    cout << missing_num << endl;
    return 0;
}



