#include<bits/stdc++.h>
using namespace std;
int last[26];
int main(){
    int t,n,k;
    string s;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        scanf("%d %d ",&n,&k);
        cin>>s;

        int cnt=0;
        for(int j=0;j<26;j++) last[j]=-1000;
        for(int j=0;j<s.size();j++){
            if(j-last[s[j]-'A']<=k) cnt++;
            last[s[j]-'A']=j;
        }

        printf("Case %d: %d\n",i,cnt);
    }
}
