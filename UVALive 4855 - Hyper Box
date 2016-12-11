#include<bits/stdc++.h>
using namespace std;
long long int f[100];
#define INF 2000000000
int hi;
int calc(int v){
    int cnt=0;
    for(int i=hi;i>=0;i--){
        if(f[i]<=v) {v-=f[i];cnt++;}
        if(v==0) return cnt;
    }
    return cnt;
}

int main(){
    f[1]=1;
    for(int i=2;i<=100;i++){
        f[i]=f[i-1]+f[i-2];
        hi=i;
        if(f[i]>INF) break;
    }

    int t;
    scanf("%d",&t);
    for(int ks=1;ks<=t;ks++){
        int n;
        long long int ans=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            int v;
            scanf("%d",&v);
            ans*=calc(v);
        }
        printf("Case %d: %lld\n",ks,ans);
    }
}
