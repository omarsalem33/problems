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
       string s, t;
       cin >> s >> t;
       bool ok = false;
       for(int i  = 0 ; i< size(s); i++)
       {
           if (t.find(s[i]) != string ::npos) {
               ok = true;
               break;
           }
       }
    cout << (ok ? "YES" :"NO") <<nl;
    }

}
