#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout<< i<<" "
using namespace std;
void CodeFast () {
    cout << fixed << setprecision(0);
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif
}

int main(){
    CodeFast();
    int n, m, x;            cin >> n >> m;
    priority_queue<int> Max;
    priority_queue<int, vector<int>, greater<int> > Min;
    for( int i = 0; i < m; i++){
        cin >> x;
        Max.push(x), Min.push(x);
    }
    int maxCost = 0, minCost = 0;
    for(int i = 0; i < n; i++){
        int m1 = Max.top(), m2 = Min.top();
        Max.pop(), Min.pop();
        maxCost += m1--, minCost += m2--;
       // cout << maxCost << " " << minCost << endl;
        if(m1)
            Max.push(m1);
        if(m2)
            Min.push(m2);
    }

    cout << maxCost << " " << minCost;
    return 0;
}
