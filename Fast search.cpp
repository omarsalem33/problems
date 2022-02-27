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
int greaterThanOrEqual(vector<int> &nums,int n ,int val ){
    int l = -1 , r = n ;
    while (r > l+1) {
        int mid = (l + r) / 2;
        (nums[mid] >= val ? r = mid : l = mid);
    }
    return r;
}
int smallerThanOrEqual(vector<int> &nums,int n ,int val ){
    int l = -1 , r = n ;
    while (r > l+1) {
        int mid = (l + r) /2 ;
        (nums[mid] <= val ? l = mid : r = mid);
    }
    return l;
}
int fastSearch(vector<int> &nums,int n,int l , int r){
    int left = greaterThanOrEqual(nums,n,l);
    int right = smallerThanOrEqual(nums, n, r);
    return right - left +1;
}
int main(){
    CodeFast();
    int n,k ,l,r,ans;
    cin >> n ;
    vector<int>nums(n);
    for(auto &i:nums)
        cin >> i;
    sort(nums.begin(),nums.end());
    cin >> k;
    while (k--){
        cin >> l >> r;
        ans = fastSearch(nums,n,l,r);
        cout << ans <<" ";
    }
    return 0;
}
