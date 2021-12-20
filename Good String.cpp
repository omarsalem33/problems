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
    int n;
    string s,s2;
    cin >> n >> s;

    for(int i = 0 ; i < n; ++i)
    {
        if(!(s2.size() % 2 and s2.back() == s[i]))
            s2.push_back(s[i]);
    }
    if (s2.size() % 2)
        s2.pop_back();
    cout << n - s2.size()<<nl;
    cout << s2 <<nl;

    return 0;
}
