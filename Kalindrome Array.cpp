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
        int n ; cin >> n;
        vector<ll>nums(n);
        for(auto &i : nums)
            cin >> i;
        set<ll>s;
        ll l = 0, r = n - 1;
        while (l <= r){
            if (nums[l] == nums[r])
                    l++,r--;
            else{
                if (s.count(nums[l]))
                {
                    l++;
                    continue;
                }
                if (s.count(nums[r]))
                {
                    r--;
                    continue;
                }
                ll c1 = 0 ,c2 = 0;
                for(int i = l+1; i <= r; ++i)
                {
                    c1++;
                    if (nums[i] == nums[r])
                        break;
                }
                for(int i = r - 1; i >= l; --i)
                {
                    c2++;
                    if (nums[i] == nums[l])
                        break;
                }
                if (c1 <= c2)
                    while (c1--)
                        s.insert(nums[l]),l++;
                else
                    while (c2--)
                        s.insert(nums[r]),r--;

            }
        }
        cout << (s.size() > 1 ? "NO" : "YES") << nl;
    }
    return 0;
}
