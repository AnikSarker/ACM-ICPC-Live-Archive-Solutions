#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int sum[10005];

int main(){
    int t,n,k;
    for(int i=2;i<=10000;i++){
        if(dp[i]==0){
            for(int j=i;j<=10000;j+=i){
                if(dp[j]==0) dp[j]=j;
                dp[j]=(dp[j]*(i-1))/i;}
        }
    }

   for(int i=2;i<=10000;i++) {sum[i]=sum[i-1]+dp[i];}

    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&k,&n);
        printf("%d %d\n",k,sum[n]+2);
    }
}
