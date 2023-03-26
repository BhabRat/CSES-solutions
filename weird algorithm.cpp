#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
 
int main() {
    ll n; cin>>n;
    cout<<n<<" ";
    while(true){
        if (n==1){break;}
        else if (n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else {
            n=(n*3)+1;
            cout<<n<<" ";
        }
    }
}

