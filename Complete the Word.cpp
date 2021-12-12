#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout<< i<<" "
using namespace std;
void CodeFast () {
    cout << fixed << setprecision(0);
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif
}

int main(){
    CodeFast();
    string s;
    cin >> s;

    bool ans = false;
    int l, r;
    if (s.size() <26)
        return cout<<-1,0;

    if(s.size() >= 26) {
        for(int i = 0; i <= (s.size() - 26); i++){
            vector<int>v(26,0);
            bool flag = true;
            for(int j = i; j < i + 26; j++) {
                if(s[j] != '?') {
                    int idx = s[j] - 'A';
                    if(v[idx] > 0) {
                        flag = false;
                        break;
                    }
                    v[idx]++;
                }
            }
            if(flag){
                ans = true;
                l = i, r = i + 26;
                break;
            }
        }
    }
    if(!ans)
        cout << -1;
     else {
        vector<char> letter;
       vector<bool>check(26,false);
        for(int i = l; i < r; i++) {
            if(s[i] != '?')
                check[s[i]-'A'] = true;
        }

        for(int i = 0; i < 26; i++)
            if(!check[i])
                letter.emplace_back(i + 'A');

        int x = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '?') {
                if(i >= l && i < r) {
                    s[i] = letter[x++];
                } else {
                    s[i] = 'O';
                }
            }
            cout << s[i];
        }
    }

    return 0;
}
