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
        ll n, k;
        cin >> n >> k;
        vector<ll>nums(n),neg,pos;

        for(auto &i: nums){
            cin >> i ;
            (i > 0 ?pos.emplace_back(i):neg.emplace_back(abs(i)));
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());

        priority_queue<ll, vector<ll> , greater<ll>> pq;

        for(int i  = pos.size() - 1; i >= 0 ; i -= k)
            pq.push(2 * pos[i]);
        for(int i  = neg.size() - 1; i >= 0 ; i -= k)
            pq.push(2 * neg[i]);
    ll ans = 0;
        while(pq.size() > 1){
            ans += pq.top();
            pq.pop();
        }
        if (pq.size())
            ans += pq.top() / 2;

        cout << ans << endl;
    }
    return 0;
}
