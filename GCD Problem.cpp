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
    int t;
    cin >> t;
    while(t--) {
        ll n ;
        cin >> n ;
        for(int i = 1; i <= n; ++i)
        {
            ll f = i + 1;
            ll s = n - (f + i);
            bool flag = false;
            while (f < s ) {
                if (f + s + i == n) {
                    if (i == __gcd(f, s)) {
                        cout << f <<' '<< s <<' '<< i <<' ' << nl;
                        flag = true;
                        break;
                    } else
                        f++, s--;
                } else if (f + s + i > n)
                    s--;
                else
                    f++;
            }
            if (flag)
                break;

        }
    }
    return 0;
}
