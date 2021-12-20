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
    cin >> n ;
    vector<int>nums(n);
    for(auto &i : nums)
        cin >> i ;
    sort(nums.begin(),nums.end());
    int days = 0, d = 1;
    for (int i = 0; i < n; ++i) {
        if (nums[i] >= d)
            days++,d++;
    }
    cout << days;
    return 0;
}
