#include<bits/stdc++.h>
#define endl "\n"
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
        ll n ;
        cin >> n ;
        ll x  = round(n / 3.0);
        cout << n - 2 * x    << ' '<< x;
        cout << endl;
    }
    return 0;
}
