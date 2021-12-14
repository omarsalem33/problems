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
void solve(){
    ll n;
    cin >> n;
    vector<ll> v;
    if (n % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll b = n;
    while (b > 0)
    {
        v.emplace_back(b % 10);
        b /= 10;
    }
    reverse(v.begin(),v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] % 2 == 0)
        {
            if (i == 0)
            {
                cout << 1 << endl;
            }
            else cout << 2 << endl;
            return;
        }
    }
    cout << -1 << endl;

}
int main(){
    CodeFast();
    int t ; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
