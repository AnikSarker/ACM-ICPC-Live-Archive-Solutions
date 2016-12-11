#include<bits/stdc++.h>
using namespace std;
string s;
int mp[26];

int main(){
    int t;
    int cs=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        int cnt=0;
        for(int i=0;s[i];i++){
            int tmp=0;
            memset(mp,0,sizeof(mp));
            for(int j=i;s[j];j++){
                int p=s[j]-'a';
                if(mp[p]==0) {tmp++; mp[p]=1;}
                else {tmp--; mp[p]=0;}
                if(tmp==0 || tmp==1) cnt++;
            }
        }
        printf("Case %d: %d\n",++cs,cnt);
    }
}
