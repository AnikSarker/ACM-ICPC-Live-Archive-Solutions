#include <bits/stdc++.h>
#define ll long long int
#define MAX 10005
using namespace std;
ll mod=10000000000007;

int main(){
	int t;
	scanf("%d",&t);

	ll n,a,b;
	for(int i=1;i<=t;i++){
		scanf("%lld %lld %lld",&n,&a,&b);
		n=n*n;

		ll ans=0;
		ll temp=1;
		for(int j=n-a+1;j<=n;j++) temp=(temp*j)%mod;
		ans+=temp;

		for(ll i=n-a;i>=n-b+1;i--){
			temp=(temp*i)%mod;
			ans+=temp;
			ans=ans%mod;
		}
		printf("Case %d: %lld\n",i,ans);
	}
}
