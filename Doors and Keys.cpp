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
      map<char , int>mp;
      bool f = true;
        for(auto x : s){
            mp[x]++;
            if(x == 'R' and mp.find('r') == mp.end())
                f = false;
            else if(x == 'G' and mp.find('g') == mp.end())
                f = false;
            else if(x == 'B' and mp.find('b') == mp.end())
                f = false;
        }
        cout << (f? "YES" :"NO") <<nl;
    }
    return 0;
}
