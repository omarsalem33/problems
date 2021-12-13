#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(), v.end()
#define TC int t; cin>>t ; while(t--)
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
    TC{
            int n; cin >> n;
            vector<int> v(n);
            cin(v);
            int cnt = 0;
            for(int i = 0; i < n; i++){
                for(int j = i+1; j < n ; j++){
                    if(__gcd(2*v[i] , v[j]) > 1 || __gcd(v[i], 2*v[j]) > 1) cnt++;
                }
            }
            cout << cnt << "\n";
            
    };
    return 0;
}
