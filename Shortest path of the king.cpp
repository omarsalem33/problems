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
        string s1, s2;
        cin >> s1 >> s2;
        cout << max(abs(s1[0] - s2[0]), abs(s1[1] - s2[1])) << nl;
        while (s1 != s2) {
            if (s1[0] < s2[0]) {
                cout << "R";
                s1[0]++;
            } else if (s1[0] > s2[0]) {
                cout << "L";
                s1[0]--;
            }
            if (s1[1] < s2[1]) {
                cout << "U";
                s1[1]++;
            } else if (s1[1] > s2[1]) {
                cout << "D";
                s1[1]--;
            }
            cout << nl;
        }
        return 0;
}
