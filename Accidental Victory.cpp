# #include<bits/stdc++.h>
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
vector < ll > nums( 2 * 1e5 + 1), cpy(2 * 1e5 + 1);
int n;
bool  good(int x){
    int temp = nums[x];
    for (int i = 0; i < n; ++i) {
        if (i == x)
            continue;
        if (nums[x] < nums[i])
            return nums[x] = temp,false;
        else
            nums[x] += nums[i];
    }
    return nums[x] = temp ,true;

}
int Binary_Search(){
    int l = 0 , r = n - 1, best = 0;
     while (l <=r){
         int mid = l + (r-l) / 2;
         (good(mid) ? (r = mid - 1 , best = mid ): l = mid + 1  );
     }
     return best;
}
int main(){
    CodeFast();
   TC{
        cin >> n;
        nums.clear(), cpy.clear();
        nums.resize(n), cpy.resize(n);
        cin(nums);
        cpy = nums;
        sort(all(nums));
        int x = Binary_Search(), cnt = 0;
        vector < int > ans;
        for(int i = 0; i < n; i++)
            if(cpy[i] >= nums[x])
                cnt++, ans.emplace_back(i + 1);
        cout << cnt << endl;
        cout(ans);
        cout<<endl;
    }
    return 0;
}
