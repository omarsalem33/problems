#include<bits/stdc++.h>
#define end "\n"
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
        int n , k;    cin >> n >> k;
        vector<int>nums(n), cnt( 2 * k +1);
        for(auto &i:nums)
            cin >> i ;
        for(int i = 0, j = n - 1 ;i < j; i++, j--){
            cnt[min(nums[i],nums[j])+1]++,cnt[max(nums[i], nums[j]) + k + 1]--;
            cnt [nums[i] +nums[j]]++, cnt [nums[i] +nums[j]+1]--;
        }
        int Max = -1;
//        for(auto i:cnt)  cout << i << " ";
//        cout << end;
         for(int i = 1; i <= 2*k; i++)
            cnt[i] +=cnt[i - 1], Max = max(Max,cnt[i]);
//        cout << end;
//        for(auto i:cnt)  cout << i << " ";
        cout << n -  Max << end ;
    }
    return 0;
}
