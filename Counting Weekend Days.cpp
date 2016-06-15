#include<bits/stdc++.h>
using namespace std;
string mn[12]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
string dy[7]={"FRI","SAT","SUN","MON","TUE","WED","THU"};
int num[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int t,m,d;
    string month,day;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int cnt=0;
        cin>>month>>day;
        for(int j=0;j<12;j++){
            if(mn[j]==month) {m=j;break;}
        }
        for(int j=0;j<7;j++){
            if(dy[j]==day) {d=j;break;}
        }
        for(int j=1;j<=num[m];j++){
            if(d%7==0 || d%7==1) cnt++;
            d++;
        }
        printf("%d\n",cnt);
    }
}
