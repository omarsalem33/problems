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
    cin >> n;
    vector<int>v(n);
    for (auto &i : v)
        cin >> i;
    for(int i = 0 ; i < n ; i++)
    {
        if (v[i] < 0)
            return cout << "NO",0;
        if (v[i] & 1) {
            if (i == n - 1)
                return cout << "NO",0;
            v[i+1]--;
        }
    }
    cout << "YES";
}
