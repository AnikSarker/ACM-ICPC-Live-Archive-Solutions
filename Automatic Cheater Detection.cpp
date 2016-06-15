#include<bits/stdc++.h>
using namespace std;
int lc[15];
int ni[15];

int main(){
    int n,t,p,b;
    char c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        int sum=0;
        for(int j=0;j<15;j++) {lc[j]=0;ni[j]=0;}

        for(int j=0;j<t;j++){
            scanf("%d %d %c",&p,&b,&c);
            if(b==1 && c=='c') lc[p]++;
            else if(b==0 && c=='i') ni[p]++;
        }
        for(int j=10;j>=1;j--){
            lc[j]+=lc[j+1];}
        for(int j=1;j<=10;j++) sum+=ni[j]*lc[j+1];
        printf("%d\n",sum);
    }
}
