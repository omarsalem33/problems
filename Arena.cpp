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
        int n,ans = 0;
        cin >> n;
        vector<int>nums(n);
        for(auto &i:nums)
            cin >> i ;
        sort(nums.begin(), nums.end());
        for(int i = 1 ; i < n ;++i)
            if (nums[0] != nums[i])
                ans++;
    cout << ans << nl ;
    }
}
