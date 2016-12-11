#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0) return 0;
        int mx=0,mh=0;
        for(int i=1;i<=n;i++){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(c>mh) {mh=c;mx=a*b*c;}
            else if(c==mh) mx=max(mx,a*b*c);
        }
        printf("%d\n",mx);
    }
}
