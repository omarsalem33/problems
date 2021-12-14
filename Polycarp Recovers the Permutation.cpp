#include<bits/stdc++.h>
#define endl "\n"
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
    ll t; cin >> t;
    while(t--){
       int n;
       cin >> n;
      vector<int> nums(n);
      for(auto &i : nums)
          cin >> i;
      deque<int>dq;
      int l = 0 , r = n - 1;
      while(l < r){
          if (nums[l] < nums[r])
              dq.push_front(nums[l]), l++;
          else
              dq.push_back(nums[r]), r--;
      }
      bool ok;
      dq.push_back(nums[l]);
        for (int i = 0 , j = n -1; i < n ; ++i,j--) {
            if (nums[i] != dq[j]){
                ok = false;
                break;
            }
            ok = true;
        }

        if (!ok){
            dq.pop_back();
            dq.push_front(nums[l]);
            for (int i = 0 , j = n -1; i < n ; ++i,j--) {
                if (nums[i] != dq[j]){
                    ok = false;
                    break;
                }
                ok = true;
            }
        }
        if (ok) {
            for (auto &i: dq)
                cout << i << " ";
            cout << endl;
        } else
            cout << -1 << endl;

    }
    return 0;
}
