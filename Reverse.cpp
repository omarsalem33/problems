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
        int n;    cin >> n;
        vector<int> nums(n);
        for(auto &i: nums)
            cin >> i ;
        int first = 0, last = 0 ;
        bool flag = false;
        for(int i = 1; i <= n; ++i){
            if (nums[i - 1] !=i and !flag){
                flag = true;
                first = i - 1;
                int temp = i;
                while (nums[i - 1] != temp)
                    i++;
                last = i - 1;
            }
        }
       reverse(nums.begin() + first , nums.begin() + last + 1);
        for(auto& i : nums)
            cout << i << ' ';
        cout << nl ;
    }
    return 0;
}
