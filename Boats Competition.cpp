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

    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> nums(n);
        for(auto &i : nums)
            cin >> i ;
        sort(nums.begin(),nums.end());
        int ans = 0 ;
        for(int sum=1;sum<=100;sum++)
        {
            int c=0,i=0,j=n-1;
            while(i<j)
            {
                if(nums[i]+nums[j] == sum)
                    c++, i++, j--;

                else if(nums[i]+nums[j]>sum)
                    j--;
                else
                    i++;
            }
            ans=max(ans,c);
        }
        cout<< ans << nl;

    }
    return 0;
}
