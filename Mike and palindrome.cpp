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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0, j = s.size() - 1; i <=j ; ++i, --j)
        if (s[i] != s[j])
            cnt++;
    cout << (cnt == 1 or (s.size() % 2 and !cnt) ? "YES" :"NO");

    return 0;
}
