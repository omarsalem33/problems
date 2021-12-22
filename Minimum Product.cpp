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

ll dif(ll a , ll b, ll x ,ll y ,ll n){
    ll difA = abs(a-x);
    ll difB = abs(b-y);
    a -= min(difA, n), n -= min(difA, n);
    b -= min(difB, n), n -= min(difB, n);
    return a*b;
}
int main(){
    CodeFast();
     int t; cin >> t;
     while (t--){
         ll a, b, x, y, n ;
         cin >> a >> b >> x >> y >> n ;
         ll ans1 = dif(a,b,x,y,n);
         ll ans2 = dif(b,a,y,x,n);
         cout << min(ans1,ans2) << nl;
     }

    return 0;
}
