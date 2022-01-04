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
        int k,n;
        bool flag  = false;
        cin >> k >> n;
        vector<vector<char>> grid(k,vector<char>(k,'.'));
        int r = 0, c = 0;
        while (n--){
            if (r >= k or c >= k){
                cout << "-1" << nl;
                flag = true;
                break;
            }

            grid[r][c] = 'R';
            r += 2 , c += 2 ;
        }
        if (!flag)
            for (auto &i: grid) {
                for (auto &j: i)
                    cout << j;
                cout << nl;
            }
    }

}
