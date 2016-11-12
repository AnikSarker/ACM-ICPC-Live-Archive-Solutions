#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[100],b[100];
ll dp[120][2][100];
bool vis[120][2][100];

int cur;
ll solve(int pos,bool isSmall,int val){
    if(pos<0) return val;
    if(vis[pos][isSmall][val]) return dp[pos][isSmall][val];
    vis[pos][isSmall][val]=1;

    int last=((bool) (cur & (1<<pos)));
    if(isSmall) last=1;

    ll cnt=0;
    for(int i=last; i>=0; i--){
        cnt+=solve(pos-1,isSmall || (i<last),val+(i==1));
    }
    return dp[pos][isSmall][val]=cnt;
}

ll go(int n){
    int cnt=0;
    cur=n;
    while(n>0)  {n/=2;cnt++;}
    memset(vis,0,sizeof(vis));
    ll ans=0;
    if(cur) ans=solve(cnt-1,0,0);
    return ans;
}

int main(){
    int a,b;
    int cse=0;
    while(scanf("%d %d",&a,&b)==2){
        if(a==0 && b==0) return 0;
        ll ans1=go(a-1);
        ll ans2=go(b);

        printf("Case %d: %lld\n",++cse,ans2-ans1);
    }
}
