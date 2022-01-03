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
    while(t--){
        ll n;
        cin >> n ;
        if (n < 4)
            cout << 4 - n;
        else if (!(n&1))
            cout << 0 ;
        else
            cout << 1 ;
        cout << nl;
    }
}
