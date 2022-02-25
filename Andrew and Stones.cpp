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
    while (t--){
        int n; cin >>n;
        vector<int>nums(n);
        for(auto& i: nums)
            cin >> i ;
        if (*max_element(nums.begin()+1,nums.end()-1) == 1 or (n == 3 and nums[1] % 2))
            cout << "-1"<<nl;
        else{
            ll ans = 0;
            for(int i = 1 ; i < n -1 ; i++)
                ans +=(nums[i] % 2 ? (nums[i]+1)/2 : nums[i]/2);
            cout << ans << nl ;
        }
    }
    return 0;
}
