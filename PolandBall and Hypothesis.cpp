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
bool is_prime(int n){
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n) ; i+=2)
        if (n % i == 0)
            return false;
    return true;
}
int main(){
    CodeFast();
   int n;
   cin >> n;
   for(int i = 1; i <= 10000 ; i++)
       if (! (is_prime(n * i + 1)))
           return cout << i, 0;
    return 0;
}
