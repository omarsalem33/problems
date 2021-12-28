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
    while (t--) {
        ll n, m, x, y, dx, dy, ans = 0;
        cin >> n >> m >> x >> y >> dx >> dy;
        ll d1 = 1, d2 = 1;
        while (x != dx and y != dy) {
            if (x == n)  d1 = - 1;
            if (y == m)  d2 = -1;
            if (x == 1)  d1 = 1;
            if (y == 1)   d2 = 1;
            x += d1, y += d2;
            ans++;
        }
        cout << ans << nl;
    }
    return 0;

}
