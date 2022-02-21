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
        int n;
        cin >> n;
        vector<int> nums(n);
        for(auto &i:nums)
            cin >> i;
        ll c = 0;
        for (int i = 1; i < n - 1; i ++)
        {
            if (nums[i] <= nums[i - 1] or nums[i] <= nums[i + 1])
                continue;
            c++;
            if (i < n - 3 and nums[i + 2] > nums[i + 1] and nums[i + 2] > nums[i + 3])
                nums[i + 1] = max(nums[i], nums[i + 2]);
            else
                nums[i] = max(nums[i + 1], nums[i - 1]);
        }
        cout << c << nl;
        for(auto &i:nums)
            cout << i <<' ';
        cout << nl;
    }
    return 0;
}
