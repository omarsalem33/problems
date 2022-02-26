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
    while (t--){
      int size ;
      cin >> size;
      string s;
      cin >> s ;
        if (size > 2)
            cout << "NO" << nl;
        else
            if (size == 1 or s[0] != s[1])
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        
    }
    return 0;
}
