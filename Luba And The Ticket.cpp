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
int help (vector<int>& a, vector<int>& b) {
    int x = a[0] + a[1] + a[2];
    int y = b[0] + b[1] + b[2];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (x == y)
        return 0;
     else if (x > y)
        return help(b, a);

     else {
        int d = y - x;
        int temp = 9 - a[0], temp2 = b[2];
        if (d <= temp || d <= temp2)
            return 1;
         else {
            if (temp > temp2) {
                a[0] = 9;
                return 1 + help(a, b);
            } else {
                b[2] = 0;
                return 1 + help(a, b);
            }
        }
    }
}
int main(){
    CodeFast();
    string s;
    cin >> s;

    vector<int> a, b;

    for (int i = 0; i < 6; i++)
        if (i < 3)
            a.emplace_back(s[i] - '0');
        else
            b.emplace_back(s[i] - '0');

    cout << help (a, b);
}

/*
a -> 1 2 3  6
b -> 4 5 6  15

b -> 1 2 3  6
a -> 4 5 6  15

d = 9
t = 9 - 4 = 5
t2 = 3

 
b -> 1 2 3  6
a -> 9 5 6  15

  */
