#include<bits/stdc++.h>
using namespace std;
int cnt[165];

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=n;i++){
            int val;
            scanf("%d",&val);
            cnt[val]++;
        }
        for(int i=1;i<=160;i++) cnt[i]+=cnt[i-1];

        int mn=INT_MAX;
        int na,nb,nc;
        for(int i=0;i<=160;i++){
            for(int j=i+1;j<=160;j++){
                for(int k=j+1;k<=160;k++){
                    int diff=0;
                    diff+=abs(4*cnt[i]-n) ;
                    diff+=abs(4*(cnt[j]-cnt[i]) - n ) ;
                     diff+=abs(4*(cnt[k]-cnt[j]) - n ) ;
                     diff+=abs(4*(cnt[160]-cnt[k]) -n );
                     if(diff<mn) {mn=diff;na=i;nb=j;nc=k;}
                }
            }
        }
       printf("Case %d: %d %d %d\n",i,na,nb,nc);
    }
}
