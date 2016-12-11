#include<bits/stdc++.h>
using namespace std;
int b[10005];
int main(){
    int B,S,p;
    int cs=0;

    while(1){
        scanf("%d %d",&B,&S);
        if(B==0 && S==0) break;
        for(int i=0;i<B;i++) scanf("%d",&b[i]);
        sort(b,b+B);
        for(int i=0;i<S;i++) scanf("%d",&p);

        printf("Case %d: ",++cs);
        if(B<=S) printf("0\n");
        else printf("%d %d\n",B-S,b[0]);
    }
}
