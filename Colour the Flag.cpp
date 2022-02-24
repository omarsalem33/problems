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
    while (t--){
        int n, m ;
        cin >> n >> m;
        vector<vector<char>>grad(n+1,vector<char>(m+1)), grad_red(n+1, vector<char>(m+1)), grad_white(n+1, vector<char>(m+1));
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= m; ++j) {
                cin >> grad[i][j];
                if (j == 1){
                    if (i == 1){
                        grad_red[i][j] = 'R';
                        grad_white[i][j] = 'W';

                    }else{
                         (grad_red[i-1][j] == 'R' ? grad_red[i][j] = 'W':grad_red[i][j] = 'R');
                        (grad_white[i-1][j] == 'R' ? grad_white[i][j] = 'W' : grad_white[i][j] = 'R');
                    }
                }else{
                    (grad_red[i][j-1] == 'R' ? grad_red[i][j] = 'W':grad_red[i][j] = 'R');
                    (grad_white[i][j-1] == 'R' ? grad_white[i][j] = 'W' : grad_white[i][j] = 'R');
                }
            }
        }
        bool ok_red = true, ok_white = true;
        for (int i = 1; i <=n ; ++i) {
            for (int j = 1; j <=m ; ++j) {
                if (grad[i][j] != grad_red[i][j] and grad[i][j] != '.') {
                    ok_red = false;
                    break;
                }
            }
        }
        for (int i = 1; i <=n ; ++i) {
            for (int j = 1; j <=m ; ++j) {
                if (grad[i][j] != grad_white[i][j] and grad[i][j] != '.') {
                    ok_white = false;
                    break;
                }
            }
        }
        if (ok_red) {
            cout << "YES"<<nl;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << grad_red[i][j];
                }
                cout << nl;
            }
        }
        else if (ok_white) {
            cout << "YES"<<nl;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << grad_white[i][j];
                }
                cout << nl;
            }
        }
        else
            cout << "NO"<<nl;
    }
    return 0;
}
