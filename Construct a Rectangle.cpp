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
    cin>> t;
    while(t--){
        vector<int>nums(3);
        for(auto &i: nums)
            cin>>i;
        sort(nums.begin(),nums.end());
        if(nums[0] + nums[1] == nums[2])
            cout<<"YES" <<nl;
        else if(nums[0] == nums[1] && nums[2] % 2 == 0)
            cout<<"YES" <<nl;
        else if(nums[0] == nums[2] && nums[1] % 2 == 0)
            cout<<"YES" <<nl;
        else if(nums[1] == nums[2] && nums[0] % 2 == 0)
            cout<<"YES" <<nl;
        else
            cout<<"NO" <<nl;
    }
    return 0;

}
