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
   while(t--) {
       ll n;
       cin >> n;
       vector<ll>nums(n),divisor;
       for(auto &i : nums)
           cin >> i ;
       
       sort(nums.begin(),nums.end());
       ll d = nums[0] * nums[n-1];
       
       for (ll i = 2; i * 1ll * i <= d ; ++i) 
           if (d % i == 0) {
               divisor.emplace_back(i);
               if (d / i != i)
                   divisor.emplace_back(d / i);
           }

       sort(divisor.begin(),divisor.end());
      cout << (nums == divisor ? d : -1) << nl;
   }
    return 0;
}
