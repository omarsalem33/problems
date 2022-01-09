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
      int n;
      cin >> n;
      string s, ans;
      cin >> s;
      ans +=s[0];
      bool find =  false ;
      for(int i  = 1 ; i < size(s);++i)
          if (s[i] < s[i - 1])
              ans += s[i], find = true;
          else if (s[i] == s[i - 1] and find)
              ans += s[i];
          else
              break;
      
      cout << ans ;
      reverse(ans.begin(),ans.end());
      cout<< ans << nl;

    }
    return 0;
}
