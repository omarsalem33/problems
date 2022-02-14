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
    int n,c1 = 0,c2 = 0;
    cin >> n;
    vector<int> r(n) , b (n);

    for(auto &i : r)
        cin >> i;
    for(auto &i : b)
        cin >> i;

    for(int i = 0; i < n ; i++)
        if (r[i] and !b[i])
            c1++;
        else if (!r[i] and b[i])
            c2++;

    if (!c1)
        cout << -1 << nl;
    else
        cout << (int) ceil((c2+1.0) / c1 )<<nl;

    return 0;
}
