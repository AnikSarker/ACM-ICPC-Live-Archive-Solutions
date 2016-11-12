#include<bits/stdc++.h>
using namespace std;
#define MAX 20000000
int ara[20000005];
long long int ans[20000005];
vector<int>prime;

int main(){
    int n;
    long long int num,p,sum;

    for(int i=2;i<=MAX;i++){
        if(!ara[i]){
            prime.push_back(i);
            for(int j=2*i;j<=MAX;j+=i){
                ara[j]=1;
            }
        }
    }

    for(int i=0;i<prime.size();i++){
        num=prime[i];
        sum=1;

        for(int j=1;;j++){
            sum=sum*num;
            if(sum>MAX) break;

            for(int k=sum;k<=MAX;k+=sum){
                if(!ans[k]) ans[k]=1;

                if(j==1) ans[k]*=(num+1);
                else{
                    ans[k]=ans[k]*(sum*num-1);
                    ans[k]=ans[k]/(sum-1);
                }
            }
        }
    }


    for(int i=2;i<=MAX;i++) ans[i]+=ans[i-1];

    while(1){
        scanf("%d",&n);
        if(n==0) break;
        printf("%lld\n",ans[n]);
    }
}
