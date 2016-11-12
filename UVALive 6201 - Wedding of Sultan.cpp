#include<bits/stdc++.h>
using namespace std;
int ara[26];
int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        stack<char>stk;
        string s;
        cin>>s;
        for(int j=0;j<26;j++) ara[j]=0;
        for(int j=0;j<s.size();j++){
            if(!stk.empty()){
                if(stk.top()==s[j]) stk.pop();
                else{
                    ara[s[j]-'A']++;
                    ara[stk.top()-'A']++;
                    stk.push(s[j]);
                }
            }
            else stk.push(s[j]);
        }

        printf("Case %d\n",i);
        for(int j=0;j<26;j++){
            if(ara[j]) printf("%c = %d\n",'A'+j,ara[j]);
        }
    }
}
