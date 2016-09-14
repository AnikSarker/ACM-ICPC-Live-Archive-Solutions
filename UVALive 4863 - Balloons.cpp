#include<bits/stdc++.h>
using namespace std;
struct team{;
    int num;
    int dA;
    int dB;
    team(int x,int y,int z){num=x;dA=y;dB=z;}
    team(){};
};
team ara[1005];

bool cmp(team x,team y){
    return abs(x.dA-x.dB)>abs(y.dA-y.dB);
}

int main(){
    int n,A,B,a,b;
    int x,y,z;
    while(1){
        int ans=0;
        scanf("%d %d %d",&n,&A,&B);
        if(n==0 && A==0 && B==0) break;

        for(int i=0;i<n;i++){
            scanf("%d %d %d",&x,&y,&z);
            ara[i]=team(x,y,z);
        }
        sort(ara,ara+n,cmp);

        for(int i=0;i<n;i++){
            int val=ara[i].num;
            if(ara[i].dA<=ara[i].dB)   {a=min(val,A);b=val-a;}
            else   {b=min(val,B);a=val-b;}
            A=A-a;
            B=B-b;
            ans=ans+a*ara[i].dA+b*ara[i].dB;
        }
        printf("%d\n",ans);
    }
}
