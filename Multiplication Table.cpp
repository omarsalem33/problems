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
    int n , num, ans = 0;
    cin >> n >> num;
    for (int i = 1; i <= n; ++i)
        if(num % i == 0 and num / i <=n)
            ans++;
    cout << ans;
    return 0;
}
