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
    int t; cin >> t;
    while (t--){
        int n, Max = 0, x, ans = 0;
        cin >> n ;
        for (int i = 1; i <= n; ++i) {
            cin >> x;
            Max = max (Max,x);
            if (Max == i)
                ans++;
        }
        cout << ans << nl;
    }
    return 0;
}
