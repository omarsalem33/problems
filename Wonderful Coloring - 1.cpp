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
    while(t--) {
        string s;
        cin >> s;
        int m = 0, n = 0;
        map<char,int> mp;
        for (int i = 0; i < s.size(); ++i)
            mp[s[i]]++;
        for(auto &i : mp)
            (i.second == 1 ?n++:m++);
        cout << m + (n / 2) << nl;
    }
    return 0;
}
