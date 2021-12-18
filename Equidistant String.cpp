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
   string s,t;
   cin >> s >> t;
   int cnt = 0;
   for(int i = 0 ; i < s.size(); ++i)
       if (s[i] != t[i])
           cnt++;
   if(cnt % 2)
       cout << "impossible" ;
   else{
       for(int i = 0 ; i < s.size(); ++i)
           if (s[i] != t[i]) {
               if (cnt % 2 and cnt > 0)
                   s[i] = t[i];
               cnt--;
           }
        
       cout << s;
   }

    return 0;
}
