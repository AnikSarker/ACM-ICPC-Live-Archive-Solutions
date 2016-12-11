#include <bits/stdc++.h>
using namespace std;
#define MAX 10005
#define INF 1e5

double ara[MAX][3];
int n;

double chk(double ht){
    double rad=0.0;
    for(int i=0;i<n;i++)    {
        double x=ara[i][0];
        double y=ara[i][1];
        double z=ara[i][2];
        double d=hypot(x,y);
        double r=(ht*d)/(ht-z);
        rad=max(rad,r);
    }

    double vol=(rad*rad)*ht;
    return vol;
}

int main(){
    while(scanf("%d",&n)==1)    {
        double zmx=0.0;
        for(int i=0;i<n;i++){
            scanf("%lf %lf %lf",&ara[i][0],&ara[i][1],&ara[i][2]);
            zmx=max(zmx,ara[i][2]);
        }

        double l=zmx;
        double r=INF;
        double h1=0.0,h2=0.0,vol=0.0;

        for(int i=1;i<=100;i++){
            h1=(l+2*r)/3;
            h2=(2*l+r)/3;

            double v1=chk(h1);
            double v2=chk(h2);

            if(v2<v1) r=h1;
            else l=h2;
            vol=v1;
        }

        double rad=sqrt(vol/h1);
        printf("%0.3lf %0.3lf\n",h1,rad);
    }
    return 0;
}
