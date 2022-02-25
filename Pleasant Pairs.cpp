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
        ll n;
        cin >> n ;
        vector<pair<ll , ll>>nums(n);
        for(int i = 0; i < n ;i++)
            cin >> nums[i].first, nums[i].second = i+1;

        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < n; i++)
            for(int j=i+1 ; j<n && nums[i].first*nums[j].first <= 2*n; j++)
                if(nums[i].first*nums[j].first == nums[i].second + nums[j].second)
                    ans++;

        cout << ans << nl;
    }
    return 0;
}
