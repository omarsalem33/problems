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
    int n,sum1=0,sum2=0,cnt=0;
    cin>>n;
    vector<int>arr(n);
    for(auto &i :arr)
        cin >> i, sum1+=i;

    sort(arr.rbegin(),arr.rend());

    for(int i=0;i<n;i++){
        if(sum2 > sum1 / 2) break;
        cnt++;
        sum2 += arr[i];
    }
    cout<<cnt;
    return 0;
}
