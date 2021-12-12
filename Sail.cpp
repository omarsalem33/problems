#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
void CodeFast (){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif
}
bool comp(pair<int , double>p1 , pair<int , double>p2){
    if(p2.second == p1.second) return p1.first < p2.first;
    else return p2.second < p1.second;
}
int main(){
    CodeFast();
    int n;
    ll sx,sy,ex,ey;
    cin >> n >> sx >> sy >> ex >> ey;
    string s;
    cin >>s;
    int ans = -1;
    for(int i =0;i<n;i++){
        if(sx < ex && s[i] == 'E')
            ans = i+1,sx++;

        else if(sx > ex && s[i]== 'W')
            ans = i+1,sx--;

        if(sy < ey && s[i] == 'N')
            ans = i+1,sy++;

        else if(sy > ey && s[i]== 'S')
            ans = i+1,sy--;

    }
    cout<<((sx == ex && sy == ey) ? ans :-1);
    return 0;
}
