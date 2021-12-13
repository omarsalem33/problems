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
        int n, Max = 0;
        cin>>n;
        vector<int>nums(n), res;
       cin(nums);
        sort(all(nums));
        if(nums[0] == nums[n-1])
            cout<<-1<<endl;
        else{
            int num = nums[0];
            for(int i = 1 ;i < n ;i ++){
                Max = __gcd(Max, nums[i] - num);
            }
            cout<<Max<<endl;
        }
    };
      return 0;
}
