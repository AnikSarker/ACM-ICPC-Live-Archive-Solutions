#include<bits/stdc++.h>
using namespace std;
stack<char>st;
int cnt[26];

int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
	string s;
	cin>>s;
	memset(cnt,0,sizeof(cnt));
	for(int j=0;s[j];j++){
	    char p=s[j];
            if(st.empty()) st.push(p);
	    else{
		if(st.top()==p) {st.pop(); if(!st.empty()) cnt[st.top()-'A']++;}
		else {st.push(p); cnt[p-'A']++;}
	    }
	}

	printf("Case %d\n",i);
	for(int i=0;i<26;i++){
	    if(cnt[i]) printf("%c = %d\n",'A'+i,cnt[i]);
	}
    }
}
