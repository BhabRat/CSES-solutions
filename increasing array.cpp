#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    int k[n], moves[n] = {0};
    for (ll i = 0; i < n; i++) {
        cin >> k[i];
    }
    for (ll i = 1; i < n; i++) {
        if (k[i] < k[i-1]) {
            moves[i] = k[i-1] - k[i];
            k[i] = k[i-1];
        }
    }
    ll total_moves = 0;
    for (ll i = 0; i < n; i++) {
        total_moves += moves[i];
    }
    cout << total_moves << endl;
    return 0;
}