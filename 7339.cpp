#include<bits/stdc++.h>
using namespace std;
int ara[26];
int main(){
    int t;
    string s;
    scanf("%d",&t);

    for(int r=1;r<=t;r++){
        for(int j=0;j<26;j++) ara[j]=0;
        cin >>s;
        for(int i=0;i<s.size();i++){
            ara[s[i]-'a']++;
        }
        
        int mn=ara[0];
        for(int i=1;i<26;i++) mn=min(mn,ara[i]);
        printf("Case %d: %d\n",r,mn);
    }
}
