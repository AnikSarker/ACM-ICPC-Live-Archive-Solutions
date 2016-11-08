#include<bits/stdc++.h>
using namespace std;
struct node{
	bool endmark;
	node *next[26+1];
	node()
	{
		endmark=false;
		for(int i=0;i<26;i++) next[i]=NULL;
	}
}*root;

int n,m;
int k;
char s[1005];
int ans;

int insert(node* now,int x,int val){
    if(!s[x]){
        if(x>=m && now->endmark==false){
            ans++;
            now->endmark=true;
            return val-1;
        }
        return val;
    }

    int id=s[x]-'A';
	if(!now->next[id]) now->next[id]=new node();
    int get=insert(now->next[id],x+1,val);
    if(get && x>=m && !now->endmark){
        ans++;
        now->endmark=true;
        return get-1;
    }
    return get;
}

bool search(char *str)
{	node *curr=root;
	for(int i=0;str[i];i++)
	{
		int id=str[i]-'A';
		if(curr->next[id]->endmark==1 && str[i+1]) return true;
		curr=curr->next[id];
	}
	return false;
}

void del(node *cur)
{
      for(int i=0;i<26;i++){
             if(cur->next[i])
                  del(cur->next[i]) ;
      }
      delete(cur) ;
}

int main(){
	while(1){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0) break;
        ans=0;
        root=new node();

        for(int i=1;i<=n;i++){
            scanf("%d %s",&k,s);
            insert(root,0,k);
        }
        printf("%d\n",ans);
        del(root);
    }
	return 0;
}
