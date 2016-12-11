#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
    if(x%y==0) return y;
    else return gcd(y,x%y);
}

int main(){
    int t;
    long long int a,b,c,d;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        long long int now1=c-a;
        long long int now2=d-b;

        printf("Case %d: ",i);
        if(now1==0 && now2==0) printf("%lld %lld %lld %lld\n",a,b,c,d);
        if(now1==0) printf("%lld 0 0 0\n",abs(now2));
        if(now2==0) printf("0 %lld 0 0\n",abs(now1));
        if(now1==0 || now2==0) continue;

        long long int p=now1*now2;
        if(p>0LL) printf("%lld 0 0 %lld\n",abs(now2),abs(now1));
        else if(p<0LL) printf("0 0 %lld %lld\n",abs(now2),abs(now1));
    }
}
