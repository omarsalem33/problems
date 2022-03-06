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
    int capacity,sumBox, countBox = 0, countM = 0, count = 0;
    cin>>capacity>>sumBox;

    vector<vector<int>>nums(20,vector<int>(20));
    for (int i = 0; i < sumBox; ++i) {
        cin >> nums[i][0] >> nums[i][1];
        countBox += nums[i][0], countM += nums[i][0] * nums[i][1];
    }
    if (countBox <= capacity)
        return cout << countM,0;

    while (capacity){
        int  x = 0;
        for (int i = 0; i < sumBox; ++i)
            if (nums[x][1] <nums[i][1])
                x = i;

        if (capacity <= nums[x][0]){
            count += nums[x][1] * capacity;
            return cout << count , 0;
        }

        count+=nums[x][0]*nums[x][1];
        capacity=capacity-nums[x][0];
        nums[x][1]=0;
    }
    return 0;
}
