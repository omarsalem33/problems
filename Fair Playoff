#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(), v.end()
#define TC int t; cin>>t ; while(t--)
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout<< i<<" "
using namespace std;
void CodeFast () {
    cout << fixed << setprecision(0);
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif
}


int main(){
    CodeFast();
    TC{
        vector<int>nums(4);
        cin(nums);
        int x = 0 ,y = 0;
        if (nums[0] > nums[1])
            x=nums[0];
        else x = nums[1];
        if (nums[2] > nums[3])
            y=nums[2];
        else y = nums[3];
        sort(all(nums));
        cout << (x+y == nums[2]+nums[3]? "YES" : "NO")<<endl;

    };
    return 0;
}
