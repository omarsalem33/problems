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
        string s, a ;
        cin >> a >> s ;
        bool flag = true;
        ll cnt = s.length() - a.length();
        
        vector<ll>ans;
        ll temp1 , temp2;
        ll r = s.size() - 1;
        for (int i = a.size() - 1; i >= 0 ; --i) {
            temp1 = a[i] - '0', temp2 = s[r] - '0';

            if (temp2 - temp1 >= 0 and cnt >= 0) {
                ans.emplace_back(temp2 - temp1);
                r--;
                continue;
            }

            else{
                if (cnt < 0)
                {
                    cout << -1 ;
                    flag = false ;
                    break;
                }

                r--;
                temp2 += (s[r] - '0') * 10;

                if (temp2 - temp1 < 10 and temp2 - temp1 >= 0) {
                    ans.emplace_back(temp2 - temp1);
                    r--;
                    cnt--;
                    continue;
                }

                else
                {
                    cout << -1 ;
                    flag = false;
                    break;
                }
            }
        }

        if (flag and cnt > 0){
           for( ;r >= 0 ;--r) {
               temp2 = s[r] - '0';
               ans.emplace_back(temp2);
           }
        }

        if (flag) {
            reverse(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); ++i) { 
                if (ans[i] == 0 and flag == true)
                    continue;
                cout << ans[i];
                flag = false;
            }
        }
        if (flag)
            cout << 0;
        cout <<nl;

    }

    return 0;
}
