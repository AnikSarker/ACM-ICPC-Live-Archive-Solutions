#include <bits/stdc++.h>
using namespace std;

struct Point {
	long long int x, y;

    Point(double a,double b){x=a;y=b;}
    Point(){}

	bool operator <(const Point &p) const {
		return x < p.x || (x == p.x && y < p.y);
	}
};

Point H[100000];
vector<Point>P;
int k;

long long int cross(const Point &O, const Point &A, const Point &B){
	return (A.x-O.x)*(B.y-O.y)-(A.y-O.y)*(B.x-O.x);
}

void convex_hull(){
	int n=P.size();
	k=0;

	sort(P.begin(),P.end());
	for (int i=0;i<n; ++i) {
		while(k >= 2 && cross(H[k-2],H[k-1],P[i])<=0) k--;
		H[k++]=P[i];
	}

	for(int i=n-2,t=k+1;i>=0;i--){
		while (k>= t && cross(H[k-2],H[k-1],P[i])<=0) k--;
		H[k++]=P[i];
	}
}

int main(){
    int n;
    while(1){
        P.clear();
        scanf("%d",&n);
        if(n==0) break;

        for(int i=1;i<=n;i++){
            long long int a,b;
            scanf("%lld %lld",&a,&b);
            P.push_back(Point(a,b));
        }
        convex_hull();

        long long int a=0,b=0;
        for(int i=0;i<k-1;i++){
             long long int tempX,tempY,mn,mx;
             tempX=abs(H[i].x-H[i+1].x);
             tempY=abs(H[i].y-H[i+1].y);
             mn=min(tempX,tempY);
             mx=max(tempX,tempY);
             b+=mn;
             a+=(mx-mn);
        }
        printf("%lld %lld\n",a,b);
    }
}
