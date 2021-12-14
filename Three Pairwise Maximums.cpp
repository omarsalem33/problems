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
      vector<int>v(3);
      for(auto &i :v)
          cin >> i;
      sort(v.begin(),v.end());
       if (v[2] !=v[1])
           cout << "NO";
       else{
           cout<<"YES"<<nl;
           cout << v[2]<<' ' << v[0] <<' '<<v[0];
       }
       cout <<nl;
   }
    return 0;
}
