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
    ll d, sumTime; cin >> d >> sumTime;
    int cnt = 0, i = 0;
    vector<pair<int,ll>> v(d);
    while(d--){
        ll minTime,maxTime; cin >> minTime >> maxTime;
        sumTime -= minTime, cnt += maxTime - minTime;
        v[i] = {minTime, maxTime - minTime}, i ++;
    }
    if(sumTime > cnt or sumTime < 0)
        return cout << "NO" << nl, 0;

    cout << "YES" <<nl;
    for(auto& [x,y] : v) {
        if (sumTime > 0) {
            cout << x + min(y, sumTime) << " ";
            sumTime -= y;
        } else
            cout << x << " ";
    }
    return 0;
}
