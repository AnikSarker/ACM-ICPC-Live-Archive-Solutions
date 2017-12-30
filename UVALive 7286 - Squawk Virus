#include <bits/stdc++.h>
using namespace std;
#define MAX 105
#define ll long long int
vector<int>adj[MAX];
ll dp[MAX][15];

int main(){
    int n,m,s,t;
    int a,b;
    while(scanf("%d %d %d %d",&n,&m,&s,&t)==4){
        for(int i=0;i<n;i++) adj[i].clear();
        for(int i=0;i<n;i++) for(int j=0;j<=t;j++) dp[i][j]=0;
        dp[s][0]=1;

        for(int i=1;i<=m;i++){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for(int j=1;j<=t;j++){
            for(int i=0;i<n;i++){
                for(auto v: adj[i]) dp[i][j]+=dp[v][j-1];
            }
        }

        ll sum=0;
        for(int i=0;i<n;i++) sum+=dp[i][t];
        cout<<sum<<endl;
    }
}
