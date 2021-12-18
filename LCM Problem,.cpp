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
   while(t--){
       ll l , r; cin >> l >> r;
       if (l*2 <= r)
           cout << l << ' ' << l * 2 << nl;
       else
           cout << "-1 -1" << nl;
   }
    return 0;
}
