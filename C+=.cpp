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
    int t, a,b,n;
    cin >> t;

    while (t--){
        int ans = 0;
        cin >> a >> b >> n ;
        while (a <= n and b <= n){
            if (a < b)
                swap(a,b);
            b+=a;
            ans++;
        }
        cout << ans << nl;
    }
    return 0;
}
