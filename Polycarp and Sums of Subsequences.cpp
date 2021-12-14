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
    while (t--) {
        vector<ll>nums(7);
        for(auto &i : nums)
            cin >> i ;
        cout << nums[0] << ' ' << nums[1]<<' ' <<(nums[0]+ nums[1] == nums[2] ? nums[3] :nums[2]);
        cout <<nl;
    }
    return 0;
}
