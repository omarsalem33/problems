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
    int n;
    cin >> n;
    vector <ll> nums(n);
    for(auto &i : nums)
        cin >> i;
    vector <ll>pre(n+1);
    for(int i = 1; i <= n; i++)
        pre[i] = nums[i-1] + pre[i-1];

    ll ans = 0, sum = 0;
    for(int i = n-1; i > 0; i--)
    {
        sum += nums[i];
        if(sum == pre[i])
            ans++;
    }
    cout << ans ;
    return 0;
}
