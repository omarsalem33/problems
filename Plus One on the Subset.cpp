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
        int n;
        cin >> n;
        vector<int>nums(n);
        for(auto &i : nums)
            cin >> i;
        cout << *max_element(nums.begin(),nums.end()) - *min_element(nums.begin(),nums.end()) << nl;
    }
    return 0;
}
