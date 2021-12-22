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
     int n, x, s = 0, o = 0;
     cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2)
            o++;
        s += x;
    }
    if (s % 2)
        cout << o;
    else
        cout << n - o;

    return 0;
}
