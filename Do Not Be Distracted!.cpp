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
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s ;
        map<char, ll>mp ;
        for(int i =0 ; i < n; i++){
            if (s[i] == s[i+1] )
                continue;

            else
               mp[s[i]]++;
        }
        for(auto &it :mp)
            if (it.second > 1)
                ans = 1;

        cout << (ans == 1 ? "NO" :"YES")<<nl;
    }
    return 0;

}
