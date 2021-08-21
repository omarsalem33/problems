#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout<< i<<" "
#define all(v) v.begin(), v.end()

using namespace std;

//             N  E  S  W  NW  NE SE SW
//int dr[] = {-1, 0, 1, 0, -1, -1, 1, 1};
//int dc[] = {0, 1, 0, -1, -1, 1, 1, -1};

void Code () {
    cout <<fixed<<setprecision(0);
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#endif

}
int main() {
    Code();
    int t;  cin>>t;
    while(t--){
        int q,m;
        cin>>q>>m;
        vector<char> ans(q,'?');
        vector< set<char> > no(q);
        while(m--){
            for(int i = 0;i < q;i++){
                char a,b;
                cin>>a>>b;
                if(b=='T')ans[i]=a;
                else no[i].insert(a);
            }
        }
        for (int i=0;i < q; i++){
            if (ans[i]=='?' && no[i].size()==3){
                for (char c='A';c<='D';c++){
                    if(no[i].find(c) == no[i].end()){
                        ans[i]=c;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<q-1;i++)      cout<<ans[i]<<" ";
        cout<<ans[q-1]<<'\n';
    }
}
