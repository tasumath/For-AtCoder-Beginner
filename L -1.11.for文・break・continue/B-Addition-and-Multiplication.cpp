#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int dp[11];

int main(){
    int n; cin>>n;
    int k; cin>>k;

    dp[1]=1;

    for(int i=1;i<=n;i++){
        int dp1=dp[i]*2;
        int dp2=dp[i]+k;
        dp[i+1] = min(dp1,dp2);
    }

    cout<<dp[n+1]<<endl;




}
