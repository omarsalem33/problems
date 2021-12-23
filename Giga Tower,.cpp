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

bool has8(int n){
    while (n){
        if (n % 10 == 8 or n % 10 == -8)
            return true;
        n/=10;
    }
    return false;
}
int main(){
    CodeFast();
    int n;
    cin >> n ;
    for(int i =  1 ; i <= 2*8 ; ++i)
        if (has8 (n+i))
            return cout << i,0;
    cout << 1;
    return 0;
}
