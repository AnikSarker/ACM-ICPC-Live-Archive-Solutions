#include <bits/stdc++.h>
#define INF 1e7
#define EPS 1e-7
using namespace std;

int a,b,c,d;
double dp[14][3][14][3][14][3][14][3];
bool vis[14][3][14][3][14][3][14][3];


double prob(int tkn,int net,int TKN){
    double val=net;
	if(tkn<net)    return (val-tkn)/(54-TKN);
	return 0.00;
}

double solve(int p,int pj,int q,int qj,int r,int rj,int s,int sj){
	int P=p+pj;
	int Q=q+qj;
	int R=r+rj;
	int S=s+sj;
	int tkn=P+Q+R+S;


	if(P>=a&&Q>=b&&R>=c&&S>=d)    return 0.0;

	if(vis[p][pj][q][qj][r][rj][s][sj])    return dp[p][pj][q][qj][r][rj][s][sj];

	vis[p][pj][q][qj][r][rj][s][sj]=1;


	double ret=0.0,ret1=0.0,ret2=0.0,ret3=0.0,ret4=0.0,ret5=0.0;

	ret1=(p<13) ? prob(p,13,tkn)*solve(p+1,pj,q,qj,r,rj,s,sj) : 0.0 ;
	ret2=(q<13) ? prob(q,13,tkn)*solve(p,pj,q+1,qj,r,rj,s,sj) : 0.0;
	ret3=(r<13) ? prob(r,13,tkn)*solve(p,pj,q,qj,r+1,rj,s,sj) : 0.0;
	ret4=(s<13) ? prob(s,13,tkn)*solve(p,pj,q,qj,r,rj,s+1,sj) : 0.0;


	double hld=INF;
    double prb=prob(pj+qj+rj+sj,2,tkn);

    if(pj+qj+rj+sj<2){

        hld=min(hld,solve(p,pj+1,q,qj,r,rj,s,sj));
        hld=min(hld,solve(p,pj,q,qj+1,r,rj,s,sj));
        hld=min(hld,solve(p,pj,q,qj,r,rj+1,s,sj));
        hld=min(hld,solve(p,pj,q,qj,r,rj,s,sj+1));

        ret5=prb*hld;
    }

	ret=1.0+ret1+ret2+ret3+ret4+ret5;

	dp[p][pj][q][qj][r][rj][s][sj]=ret;

	return ret;
}




int main(){
	int t;
	scanf("%d",&t);
	int cs=0;
	while(cs<t){
		scanf("%d %d %d %d",&a,&b,&c,&d);

        double ans=0;

		if(max(0,a-13)+max(0,b-13)+max(0,c-13)+max(0,d-13)>2)    ans=-1.0000;
        else{
            memset(vis,0,sizeof(vis));
            ans=solve(0,0,0,0,0,0,0,0);
        }
        printf("Case %d: %.3lf\n",++cs,ans);
	}

	return 0;
}
