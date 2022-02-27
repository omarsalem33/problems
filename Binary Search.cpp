#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll M = 1000000007;
void FASTIO () {
    cout <<fixed<<setprecision(0);
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif

}

bool Binary_Search(vector<ll>& v,int target){
    int l = 0, r = v.size()-1;
    while (l<=r) {
        int m = l + (r - l) / 2;
        if (v[m] == target) return true;
        (v[m] < target ? l = m + 1 : r = m - 1);
    }
    return false;
}
int Lower_Bound(vector<ll>& num,int target){
    int l = 0, r = num.size()-1 , best=0;
    while (l<=r) {
        int m = l + (r - l) / 2;
        (num[m] <= target ? (l = m + 1 , best = m+1) : r = m - 1);
    }
    return best;
}

int main() {
    FASTIO();
    int n,q; cin>>n>>q;
    vector<ll>num(n);
    for(auto &i:num) cin>>i;
    sort(num.begin(),num.end());
    while (q--){
        int x;    cin>>x;
        cout<<(Binary_Search(num,x)?"YES":"NO") <<"\n";
    }

    return 0;
}
