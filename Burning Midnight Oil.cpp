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
ll n , k;
ll calcSum( ll m){
    ll t,sum = 0;
    for (ll i = 0; i < 1e9; ++i) {
        t = pow(k,i);
        if (m / t == 0 )
            break;
        sum +=m / t;
    }
    return sum;
}

bool is_good(ll m){
    ll sum = calcSum(m);
    return sum >= n;
}


ll bs(){
    ll l = 1, r = 1e9 ,best = 0;
    while(l <= r) {
        ll mid = l + (r-l) / 2;
        (is_good(mid) ?r = mid-1 ,best =mid : l =mid + 1);
    }
    return best;
}
int main(){
    CodeFast();
    cin >> n >> k;
    cout << bs() ;
    return 0;
}
