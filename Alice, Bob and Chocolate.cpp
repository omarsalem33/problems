#include<bits/stdc++.h>
#define end "\n"
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
  int n;    cin >> n;
  vector<int>times(n);
  int bob = 0, alice = 0 , l = 0 , r = n - 1, ans1 = 0, ans2 = 0;
  for(auto &i : times)
      cin >> i;
    while (l < r){
        if (bob == alice){
            bob += times[r--];
            alice += times[l++];
            ans1++, ans2++;
        }else if (bob > alice) {
            alice += times[l++], ans1++;
        }else {
            bob += times[r--], ans2++;
        }
    }
    if (ans1 + ans2 !=n and alice <= bob)
        ans1++;
    else if (ans1 + ans2 !=n)
        ans2++;
    cout << ans1 << ' ' << ans2 << end;
    return 0;
}
