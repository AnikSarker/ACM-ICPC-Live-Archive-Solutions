#include<bits/stdc++.h>
using namespace std;
int ans[17][50][100];
char now[17][50];
bool mark[1000];
bool check[100];
int main(){
    int n,q;
    scanf("%d %d ",&n,&q);

    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        for(int j=0;j<17;j++){
            for(int k=0;k<43;k++){
                scanf(" %c",&now[j][k]);
                if(now[j][k]=='*'){
                    ans[j][k][s[i]]=1;
                }
            }
        }
    }



    for(int i=1;i<=q;i++){
        string l;
        cin>>l;
        printf("Query %d: ",i);
        memset(mark,0,sizeof(mark));
        memset(check,0,sizeof(check));
        for(int j=0;l[j];j++){
            check[l[j]]=1;
        }

        for(int i=0;i<17;i++){
            for(int j=0;j<43;j++){
                bool flag=1;
                int val=-1;
                for(int k=40;k<100;k++){
                    if(ans[i][j][k]==1){
                        if(check[k]==1){
                            if(val==-1) val=k;
                            else flag=0;
                        }
                    }
                }
                if(flag==1 && val!=-1) mark[val]=1;
            }
        }

        for(int j=0;l[j];j++){
            if(mark[l[j]]==1) printf("Y");
            else printf("N");
        }
        printf("\n");
    }
}
