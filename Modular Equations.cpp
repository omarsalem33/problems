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
    ll a, b;
    cin >> a >> b;
    if (a==b)
        return cout << "infinity",0;
    else if (b > a)
        return cout << 0 ,0;
    else {
        a-=b;
        ll y = sqrt(a);
        ll ans = 0;
        for(int i = 1 ; i<= y ; i++){
            if(a % i == 0){
                if(i>b)
                    ans++;
                if(i != (a / i))
                    if( a / i > b)
                        ans++;
            }
        }
        cout<<ans;
    }
    return 0;
}
