#include <bits/stdc++.h>
using namespace std;
#define MAX 105

struct game{
    double a;
    double l;
    double p;
    game(){}
    game(double x,double y,double z){a=x;l=y;p=z;}
};

double check(game u,game v){
    double ret=0;
    ret+=(1+u.a+v.a)*u.p*v.p;
    ret+=(1+u.a)*(1-v.l)*u.p*(1-v.p);
    ret+=(1-u.l+v.a)*(1-u.p)*v.p;
    ret+=(1-u.l)*(1-v.l)*(1-u.p)*(1-v.p);
    return ret;
}

bool cmp(game a,game b){
    return check(a,b)<check(b,a);
}

int n,k;
double x;
game ara[MAX];
double dp[MAX][MAX];
bool vis[MAX][MAX];

double solve(int cur,int left){
    if(left==0) return x;
    if(cur==n) return 0;
    if(vis[cur][left]==1) return dp[cur][left];

    double val1=solve(cur+1,left-1);
    val1=(val1+ara[cur].a)*(ara[cur].p)+val1*(1-ara[cur].l)*(1-ara[cur].p);
    double val2=solve(cur+1,left);

    vis[cur][left]=1;
    return dp[cur][left]=max(val1,val2);
}

int main(){
    while(1){
        scanf("%d %d %lf",&n,&k,&x);
        if(n==0 && k==0 && x==0) break;

        for(int i=0;i<n;i++){
                scanf("%lf %lf %lf",&ara[i].a,&ara[i].l,&ara[i].p);
                ara[i].l/=100;
                ara[i].p/=100;
        }
        sort(ara,ara+n,cmp);
        for(int i=0;i<n;i++){
        }
        memset(vis,0,sizeof(vis));

        printf("%.2lf\n",solve(0,k));
    }
}
