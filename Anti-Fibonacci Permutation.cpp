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
     int n ;cin >> n ;
        for (int i = 1; i <= n ; ++i) {
            cout << i << ' ';
            for (int j = n; j >0 ; --j) {
                if(i != j) cout << j << ' ';
            }
            cout << nl;
        }
    }
    return 0;
}
