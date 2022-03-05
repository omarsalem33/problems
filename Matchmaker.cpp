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
      int n, m ;
      cin >> n >> m ;
      map<int,int>mp;
     map<pair<int,int> ,int>beautifully;
     pair<int ,int>entry;

     for (int i = 0; i < n; ++i) {
        cin >> entry.first >> entry.second;
        beautifully[entry]++;
        mp[entry.second]++;
    }
    int a = 0 , b = 0;
    for (int i = 0; i < m; ++i) {
        cin >> entry.first >> entry.second;
        if (mp[entry.second] > 0)
            a++,mp[entry.second]--;
        if (beautifully[entry] > 0)
            b++, beautifully[entry]--;
    }
    cout << a <<" "<< b;
    return 0;
}
