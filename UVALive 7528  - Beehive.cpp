#include <bits/stdc++.h>
using namespace std;
#define MAX 15005
vector<int>adj[MAX];

void go(int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void buildAdjList(){
    for(int i=2;i<=4;i++){
        go(1,i);
        for(int j=2*i+1;j<=2*i+3;j++) go(i,j);
    }
    go(2,3);
    go(3,4);

    int num=5;
    int len=7;
    for(int level=3;;level++){
        if(num>10005) break;
        int st=num;
        int mid=num+len/2;
        int en=st+len-1;

        int next=en+1;

        int spec=level/2-1;

        if(level%2==1){
            go(st++,next);
            go(st,st-1);
            en--;
        }

        if(spec){
            go(st,next++);
            go(st,next++);
        }
        else next++;

        for(int i=st+1;i<st+spec;i++){
            go(i,i-1);
            go(i,next-1);
            go(i,next++);
        }

        go(st+spec,st+spec-1);
        go(st+spec,next-1);
        go(st+spec,next++);
        go(st+spec,next++);

        for(int i=st+spec+1;i<mid;i++){
            go(i,i-1);
            go(i,next-1);
            go(i,next++);
        }

        go(mid,mid-1);
        go(mid,next-1);
        go(mid,next++);
        go(mid,next++);

        for(int i=mid+1;i<en-spec;i++){
            go(i,i-1);
            go(i,next-1);
            go(i,next++);
        }

        go(en-spec,en-spec-1);
        go(en-spec,next-1);
        go(en-spec,next++);
        go(en-spec,next++);

        for(int i=en-spec+1;i<en;i++){
            go(i,i-1);
            go(i,next-1);
            go(i,next++);
        }

        if(spec){
            go(en,en-1);
            go(en,next-1);
            go(en,next);
        }
        else next--;
        if(level%2==1) {go(++en,next); go(en,en-1);}

        num=en+1;
        if(level%2==0) len+=4;
        else len+=2;
    }
}


int dist[MAX];
bool vis[MAX];

void bfs(int u){
    vis[u]=1;
    dist[u]=0;
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int i=0;i<adj[v].size();i++){
            int w=adj[v][i];
            if(w>10005) continue;
            if(!vis[w]){
                vis[w]=1;
                dist[w]=dist[v]+1;
                q.push(w);
            }
        }
    }
}

int main(){
    buildAdjList();
    while(1){
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==0 && m==0) break;
        memset(vis,0,sizeof(vis));
        bfs(n);
        printf("%d\n",dist[m]);
    }
}
