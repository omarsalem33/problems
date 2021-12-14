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
    while(t--){
        int n, x;
        cin >> n;
        vector<int> ans;
        /*for(auto &i:nums)
            cin >> i;*/
       for(int i = 0 ; i < 2*n; ++i){
           int x;
           cin >> x;
           if (count(ans.begin(),ans.end() ,x))
               continue;
           else
               ans.emplace_back(x);
       }
        for(auto &i : ans)
            cout << i << ' ';
        cout << nl;
    }
    return 0;
}
