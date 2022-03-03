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
    int n; cin >> n ;
    vector<int>nums(n);
    for(auto &i :nums)
        cin >> i;

    int Min = *min_element(nums.begin(),nums.end());
    cout << 1 << ' ' << Min << nl;

    vector<int>zeros;
    for(auto& i : nums)
        if (i <= 0  and i != Min)
            zeros.emplace_back(i);
    sort(zeros.rbegin(),zeros.rend());
    vector<int>pos;
    for(auto& i : nums)
        if (i > 0)
            pos.emplace_back(i);

    if(pos.empty()) {
        cout << 2 << ' ' << zeros.back() << ' ';
        zeros.pop_back() ;
        cout << zeros.back()<<nl;
        zeros.pop_back();
    }else{
        cout << pos.size() << " ";
        for (auto &i: pos)
            cout << i << ' ';
        cout << nl;
    }
    cout << zeros.size() << " ";
    for(auto& i : zeros)
        cout << i << ' ';
    cout << nl;



    return 0;
}
