#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        string s;
        cin>>s;
        bool flag=1;

        if(s.size()!=8) flag=0;
        if(s[0]!=s[1]) flag=0;
        for(int i=0;s[i];i++){
            if(i==4){
                if(s[i]>='A' && s[i]<='Z') continue;
                flag=0;
            }
            else{
                if(s[i]>='1' && s[i]<='9') continue;
                flag=0;
            }
        }
        if(flag==1) {cout<<s<<endl; continue;}
    }
}
