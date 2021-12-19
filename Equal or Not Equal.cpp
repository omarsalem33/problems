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
    while(t--){
        string s;
        cin >> s;
        if (count(s.begin(),s.end(),'N') == 1)
            cout << "NO"<<nl;
        else
            cout << "YES"<<nl;  
    }
    return 0;
}
