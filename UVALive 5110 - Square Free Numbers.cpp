#include<bits/stdc++.h>
using namespace std;
#define MAX 100005

int solve(int n){
    int p=sqrt(n);
    int ans=0;
    for(int i=2;i<=p;i++){
        int cnt=0;
        while(n%i==0) {n=n/i;cnt++;}
        ans=max(ans,cnt);
    }
    if(n!=1) ans=max(ans,1);
    return ans;
}

int main(){
    int t,n;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        printf("%d\n",solve(n));
    }
}
