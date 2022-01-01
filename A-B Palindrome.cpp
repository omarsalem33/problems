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
int n, a , b; 
string s;

bool valid(string s){
    int c0 = count(s.begin(),s.end(), '0');
    int c1 = count(s.begin(),s.end(), '1');
    bool is_palindrome = true;

    for (int i = 0; i<n/2; i++)
        if (s[i] != s[n-i-1]) {
            is_palindrome = false;
            break;
        }

    bool Q = false;
    if (s.find("?") != string::npos)
        Q = true;
    return c0 == a and c1 == b and is_palindrome and !Q;
}
int main(){
    CodeFast();
    int t;
    cin >> t;
    while (t--){
        cin >> a >> b >> s;
        n = int(s.size());



        for (int i = 0; i < n/2; i++) {
            if (s[i] == '?')
                s[i] = s[n-i-1];
            else if (s[n-i-1] == '?')
                s[n-i-1] = s[i];
        }
        int cnt0 = a - count(s.begin(), s.end() ,'0');
        int cnt1 = b - count(s.begin(), s.end() ,'1');

        for (int i = 0; i < n/2; i++) {
			if (s[i] == '?') {
				if (cnt0 > cnt1)
					s[i] = s[n-i-1] = '0', cnt0 -= 2;
				else
					s[i] = s[n-i-1] = '1', cnt1 -= 2;
			}
		}

        if (n % 2 == 1 and s[n / 2] == '?') {
            cnt0 = a - count(s.begin(),s.end(), '0');
            cnt1 = b - count(s.begin(),s.end(), '1');
            if (cnt0 > cnt1)
                s[n/2] = '0';
            else
                s[n/2] = '1';
        }


        cout << (valid(s) ? s :"-1")<<nl;
    }
    return 0;

}
