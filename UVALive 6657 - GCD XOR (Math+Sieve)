#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAXN 30000000
ll mp[MAXN+7];

void process(){
    for(int i=2;i<MAXN;i+=2){
        for(int j=1;(i+1)*j<=MAXN;j++){
            ll x=i*j;
            ll y=x+j;
            if((x^y)==j) mp[y]++;
        }
    }
    for(int i=2;i<=MAXN;i++)    {
        mp[i]=mp[i-1]+mp[i];
    }
}


int main(){
    process();
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        ll n;
        scanf("%lld",&n);
        printf("Case %d: %lld\n",i,mp[n]);
    }
}
