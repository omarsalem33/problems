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


vector<ll> nums;
ll n, l, r;
int lower_bound(int i ){
    int left = i + 1, right = n - 1, best = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[i] + nums[mid] >= l && nums[i] + nums[mid] <= r)
            best = mid, right = mid - 1 ;
        else if(nums[i] + nums[mid] > r)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return best;
}

int upper_bound(int i){
    int left = i + 1, right = n - 1, best = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[i] + nums[mid] >= l && nums[i] + nums[mid] <= r)
            best = mid, left = mid + 1 ;
        else if(nums[i] + nums[mid] > r)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return best;
}



int main(){
    CodeFast();
   int t; cin >> t;
    while (t--){
        cin >> n >> l >> r;
        nums.resize(n);
        for(auto &i :nums)
            cin >> i;
        sort(nums.begin(), nums.end());
        ll ans = 0;
        for(int i = 0 ; i < n ; i ++){
            int x = lower_bound(i) , y = upper_bound(i);
            //cout << x <<' ' << y << nl;
            if (x == - 1 or y == -1)
                continue;
            ans += y - x + 1;
        }
        cout << ans <<nl;
    }
    return 0;
}
