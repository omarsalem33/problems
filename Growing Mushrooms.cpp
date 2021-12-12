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
   double n, t1, t2,k;
   cin >> n >> t1 >> t2 >> k;
   vector<pair<int , double >>v;
   for(int i = 0; i < n; ++i){
       double a,b , x , y ;
       cin >> a >> b;
       x = (a * t1) - (a * t1 * k / 100.00) + b * t2;
       y = (b * t1) - (b * t1 * k / 100.00) + a * t2;

       if (x  > y)
           v.emplace_back(pair{i + 1 , x });
       else
           v.emplace_back(pair{i + 1 , y});
   }
    sort(v.begin(),v.end(), comp);
   for(auto &i : v)
       cout << i.first <<' '<< fixed << setprecision(2) << i.second << endl;
    return 0;
}
