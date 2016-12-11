#include<bits/stdc++.h>
using namespace std;

int val=0;
int prof[105];
vector<int>adj[105];
int last;
void dfs(int u){
    int mx=-1;
    int node=-1;
    val+=prof[u];
    for(int i=0;i<adj[u].size();i++){
        if(prof[adj[u][i]]>mx){
            mx=prof[adj[u][i]];
            node=adj[u][i];
        }
    }
    if(node==-1) last=u;
    else dfs(node);
}

int main(){
    int t,n,e,a,b;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        scanf("%d %d",&n,&e);
        for(int i=0;i<n;i++) {scanf("%d",&prof[i]); adj[i].clear();}
        for(int i=0;i<e;i++){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
        }
        val=0;
        last=0;
        dfs(0);
        printf("Case %d: %d %d\n",j,val,last);
    }
}
