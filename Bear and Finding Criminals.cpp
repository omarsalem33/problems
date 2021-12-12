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

int main(){
    CodeFast();
    int distance, numOFcity, pos, sum = 0;
    cin >> numOFcity >> pos;

    vector<int> arr(numOFcity + 1);


    for (distance = 1;distance <= numOFcity;distance++)
    {
        cin >> arr[distance];
        sum += arr[distance];
    }


    for (distance = 1; distance<pos && distance <= numOFcity - pos ;distance++)
    {
        if (arr[pos + distance] + arr[pos - distance] == 1)
            sum--;
    }

    cout << sum;
    return 0;
}
