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
        int n , x;
        cin >> n ;
        map<int , int >mp;
        for(int i = 0 ;i < n; i++){
            cin>>x , mp[x]++;
            if(mp[x] > 1 and mp[-1 * x] == 0)
                mp[x] --,mp[ -1 * x] ++;
        }
        cout << mp.size() << nl;
    }
    return 0;
}
