#include <bits/stdc++.h>
#define INF 1000000007
using namespace std;

struct Vector{
    int x;
    int y;
};

bool cmp(Vector a,Vector b){
    return a.y*b.x>a.x*b.y;
}

int n,k;
Vector v[55];
int dp[55][55][2550];
bool vis[55][55][2550];

int solve(int i,int left,int ysum){
    if(i>n){
        if(left>0) return -INF;
        else return 0;
    }

    if(vis[i][left][ysum]==1) return dp[i][left][ysum];
    vis[i][left][ysum]=1;

    int ret=0;
    if(left>0) ret=v[i].x*(v[i].y+2*ysum)+solve(i+1,left-1,ysum+v[i].y);
    ret=max(ret,solve(i+1,left,ysum));

    return dp[i][left][ysum]=ret;
}


int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        memset(vis,0,sizeof(vis));
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&v[i].x,&v[i].y);
        }
        sort(v+1,v+n+1,cmp);
        printf("Case %d: %d\n",i,solve(1,k,0));
    }
}
