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
        int n;              cin >> n ;
        vector<string> v(n-2);
        for(auto &i : v)
            cin >> i;
        string s = "";
       //s += v[0][0];
       bool flag = false;
        for (int i = 1; i < n - 2; ++i) {
            cout << v[i-1][0];
             if(v[i][0] != v[i-1][1])
                 cout<< v[i-1][1] , flag = true;
        }
        cout << v[n-3];
        if (!flag)
            cout<<'b';
        cout <<nl;
    }
    return 0;
}
