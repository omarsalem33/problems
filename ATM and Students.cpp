#include<bits/stdc++.h>
#define endl "\n"
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
        ll n, s;
        cin >> n >> s;
        vector<ll>students (n);
        for(auto& i : students )
            cin >> i;
        ll mx = 0, j = 0,l,r;
        for(int i = 0; i < n ;++i){
            while (j < n and students[j] + s >= 0)
                s += students[j++];
            if (j-i > mx) {
                mx = j - i;
                l = i + 1;
                r = j;
            }
            s -= students[i];
            //cout << s <<" ";
        }
        if (mx)
            cout << l << " " << r ;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
