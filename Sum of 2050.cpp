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
    int t; cin >>  t;
    while (t--){
        unsigned ll x ;
        cin >> x;
       if(x % 2050)
           cout << "-1" << nl;
       else {
       x/= 2050;
       ll ans = 0 ;
           while (x > 0){
                ans += x % 10;
                x /= 10;
           }
           cout << ans <<nl;
       }
    }

    return 0;
}
