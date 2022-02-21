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
    while (t--) {
        int n;
        cin >> n;
        vector<ll> nums(n);
        for (auto &i: nums)
            cin >> i;
        ll x = nums[0];
        for (int i = 0; i < n; i++)
            x |= nums[i];
        cout << x << nl;
    }
    return 0;
}
