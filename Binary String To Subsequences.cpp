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
    while (t--){
        int n , c = 0 ;    cin >> n;
        string s;  cin >> s;
        vector<int>ans(n),v1,v0;
       for(int i = 0; i < n; ++i)
        if (s[i] == '0'){
            if (v1.empty()) {
                ans[i] = ++c;
                v0.emplace_back(c);
            }else {
                ans[i] = v1.back();
                v0.emplace_back(ans[i]);
                v1.pop_back();
            }
        }else{
            if(v0.empty()){
                ans[i] = ++c;
                v1.emplace_back(c);
            }else{
                ans[i] = v0.back();
                v1.emplace_back(ans[i]);
                v0.pop_back();
            }
        }
       int Max  = -1;
       for(auto &i : ans)
           Max = max(i ,Max);
       cout << Max << endl;
       for(auto &i :ans)
           cout << i << ' ';
       cout << endl;
    }
    return 0;
}
