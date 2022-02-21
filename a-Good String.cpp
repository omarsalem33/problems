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
ll solve (char c, const string &s)
{
    if (s.size() == 1)  return s[0] != c;

    ll mid = s.size() / 2;
    ll l = solve(c + 1, string(s.begin(), s.begin() + mid));
    l += s.size() / 2 - count(s.begin() + mid, s.end(), c);
    ll r = solve(c + 1, string(s.begin() + mid, s.end()));
    r += s.size() / 2 - count(s.begin(), s.begin() + mid, c);
    return min(l, r);
}   
int main(){
    CodeFast();
    int t; cin >> t;
    while (t--) {
        ll n; string s;
        cin >> n >> s;
        cout<<solve('a',s)<<nl;
    }
    return 0;
}
