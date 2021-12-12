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
    int t;
    cin >> t;
    while (t--){
       string s , t;
       cin >> s >> t;
       if (s.size() < t.size()){
           cout << "NO" << endl;
           continue;
       }
       int l = s.length()-1 , r = t.length() - 1 , ans = 0;
        while (l >= 0){
            if (s[l] == t[r])
                ans++,r--;
            else
                l--;
            l--;
        }
        cout << (ans == t.size() ?"YES" : "NO") << endl ;
    }
    return 0;
}
