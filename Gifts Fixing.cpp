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

    int t; cin >> t;
    while(t--){
        ll n ; cin >> n;
        vector<ll> nums1(n),nums2(n);
        for(auto &i : nums1)
            cin >> i ;
        for(auto &i : nums2)
            cin >> i ;
        ll mn1 = *min_element(nums1.begin(), nums1.end());
        ll mn2 = *min_element(nums2.begin(),nums2.end());

        ll ans = 0;
        for(int i = 0 ; i < n; ++i)
            ans += max((nums1[i] - mn1), (nums2[i]-mn2));
        cout << ans << nl;

    }
    return 0;
}
