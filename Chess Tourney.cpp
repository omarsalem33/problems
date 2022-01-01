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
    vector<int>nums(2*n);
    for(auto &i : nums)
        cin >> i;
    sort(nums.begin(),nums.end());
    cout << (nums[n] > nums[n -1] ? "YES" :"NO");
}
