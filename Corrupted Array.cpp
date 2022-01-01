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
    while (t--){
        int n; cin >> n;
        vector<ll>a(n + 2);
       for(auto &i : a)
           cin >> i;
       ll sum = 0;
       sort(a.begin(),a.end());
        for(int i = 0 ; i < n + 1; ++i)
            sum+= a[i];

        bool ok = false;
        for(int i = 0; i < n + 1 ; ++i){
            if (sum - a[i] == a.back()) {
                for (int j = 0; j < n + 1; ++j)
                    if (i != j)
                        cout << a[j] << ' ';
                cout << nl;
                ok = true;
                break;
            }
        }

        if (ok)
            continue;

        sum = 0 ;
        for(int i = 0 ; i < n; i++)
            sum +=a[i];
        if (sum == a[n]) {
            for (int j = 0; j < n; j++)
                cout << a[j] << ' ';
            cout << nl;
        }
        else
            cout << -1 << nl;

    }
    return 0;

}
