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
    int t;
    cin >> t;
    while(t--){
        int n ,x,y ,Min =INT_MAX;
        
        cin >> n >> x >> y;
        int d = y - x;
        deque<int>ans;
        
        for(int i  = 1; i <= d; ++i)
            if (d % i == 0)
            {
                deque<int>cur;
                int a = y;
                while(size(cur) < n and a >= 1)
                    cur.push_front(a), a -= i;
                a = y;
                while(size(cur) < n)
                    a += i, cur.push_back(a);
 
                if(cur.front() <= x && cur.back() < Min)
                    Min = cur.back(), ans = cur;
            }

        for (auto &i:ans)
            cout << i <<' ';
        cout << nl;
    }
    return 0;
}
