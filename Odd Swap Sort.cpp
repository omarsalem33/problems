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
       int n ;
       cin >> n ;
       vector<int>odd, even ;
       for(int i = 0; i < n ; i++) {
           int num;
           cin >> num;
           (num % 2 ? odd.emplace_back(num): even.emplace_back(num));
       }
       bool flag = true;
      if (!is_sorted(odd.begin(),odd.end()) or !is_sorted(even.begin(),even.end()))
          flag = false;
      cout << (flag ? "YES" :"NO") << nl ;
   }
    return 0;
}
