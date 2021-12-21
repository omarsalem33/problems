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
    int b , n;
    cin >> b >> n;
    vector<int>nums(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> nums[i];
    ll sum = 0;
    for(int i = 1; i < n ; ++i)
        sum += nums[i] % 2 * (b % 2);
    sum +=nums.back();
    cout << (sum & 1 ? "odd" : "even") << nl;
    return 0;
}
