#include<bits/stdc++.h>
using namespace std;
#define MAX 10005
#define LL long long int
using namespace std;

int h,w;
LL solve(){
    LL ans = 0;
    for(int i=0;i<=h/2;i++) {
        for(int j=0;j<=w/2;j++) {
            int temp=sqrt(i*i+j*j);
            if(temp*temp!=i*i+j*j) continue;
            for(int k=1;k<temp;k++){
                int y1=min(-k,j-(temp-k));
                int y2=max(k,j+(temp-k));
                int x1=min(-k,i-(temp-k));
                int x2=max(k,i+(temp-k));

                int x=x2-x1;
                int y=y2-y1;
                if(x>h || y>w) continue;
                int val=(h-x+1)*(w-y+1);
                if(i*j) val=val*2;
                ans+=val;
            }
        }
    }
    return ans;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&h,&w);
        printf("Case %d: %lld\n",i,solve());
    }
    return 0;
}
