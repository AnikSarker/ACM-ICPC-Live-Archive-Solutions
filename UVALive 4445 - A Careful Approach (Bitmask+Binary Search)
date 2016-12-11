#include<bits/stdc++.h>
using namespace std;

#define pii pair<double,double>
#define piii pair<pii,double>
#define f first
#define s second
#define mp make_pair
#define MAX 100
piii st[100];
piii en[100];

int n;

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

bool check1(int mask,double val,double tme){
    if(mask==(1<<n)-1) return true;

    bool flag=false;
    for(int i=0;i<n;i++){
        if(check(mask,i)==1) continue;

        double temp=max(tme+val,st[i].f.f);
        if(temp<=st[i].f.s) flag=flag|check1(Set(mask,i),val,temp);
    }
    return flag;
}

bool check2(double val){
    bool flag=false;
    for(int i=0;i<n;i++){
        flag|=check1(Set(0,i),val,st[i].f.f);
    }
    return flag;
}

double BS(){
    double lo=0;
    double hi=1440*60;

    for(int i=1;i<=70;i++){
        double mid=(lo+hi)/2;
        if(check2(mid)==true) lo=mid;
        else hi=mid;
    }
    return lo;
}

int main(){
    int t,cs=0;

    while(1){
        scanf("%d",&n);
        if(n==0) break;

        for(int i=0;i<n;i++){
            double a,b;
            scanf("%lf %lf",&a,&b);
            st[i]=mp(mp(a,b),i);
        }

        double ans=BS();
        double minute;
        double second;

        second=modf(ans,&minute);
        second*=60;

        printf("Case %d: %0.0lf:%02.0lf\n",++cs,minute,second);
    }
}
