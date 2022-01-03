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
     string s;
     cin >> s;
     map<char, int >m;
     int l = 0, ans  = INT_MAX;

     for(int i = 0; i < size(s); i++){
         m[s[i]]++;
         while (m['1'] > 0 and m['2'] > 0 and m['3'] > 0)
             ans = min(ans,i-l+1), m[s[l++]]--;
     }
     cout << (ans == INT_MAX ? 0 : ans) <<nl;
    }

}
