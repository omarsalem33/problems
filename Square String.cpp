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

void s(){
    string s;
    cin >> s;
    if (s.size() % 2)
    {
        cout << "NO" << endl;
        return;
    }
    int l = 0, r = (s.size() / 2);
    while (l < (s.size() / 2))
    {
        if (s[l] != s[r])
        {
            cout << "NO" << nl;
            return;
        }
        l++, r++;
    }
    cout << "YES"<<nl;
}
int main(){
    CodeFast();
   int t;
   cin >> t;
   while(t--){
     s();
   }
    return 0;
}
