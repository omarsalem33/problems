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
        vector<int> nums(n) , nums2(n);
        for (auto &i: nums)
            cin >> i;
        nums2 = nums;
        sort(nums2.begin(),nums2.end());
        bool flag =true;
        for (int i = 0; i < n; ++i) {
            if (nums[i] != nums2[i]) {
                cout << "YES" << nl;
                flag = false;
                break;
            }
        }
        if (flag)
        cout << "NO" <<nl;
    }
    return 0;
}
