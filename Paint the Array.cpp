#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
using namespace std;
void CodeFast (){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif
}

int main(){
    CodeFast();
    int t;              cin >> t;
    while (t--) {
        ll n;          cin >> n;
        vector<ll> v(n);
        for (auto &i: v) {
            cin >> i;
        }
       ll gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2)
                gcd1 = __gcd(gcd1, v[i]);
            else
                gcd2 = __gcd(gcd2, v[i]);
        }
        bool f1 = true, f2 = true;
        for (int i = 0; i < n; i += 2) {
            if (v[i] % gcd1 == 0)
                f1 = false;
        }

        for (int i = 1; i < n; i += 2) {
            if (v[i] % gcd2 == 0)
                f2 = false;
        }

        if (f1) {
            cout << gcd1;
        }
        else if (f2) {
            cout << gcd2;
        }
        else {
            cout << "0";
        }
        cout << nl;
    }
    return 0;
}
