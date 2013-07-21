/*
ID: linbing3
PROG: friday
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("friday.in","r",stdin)
#define write           freopen("friday.out","w",stdout)
#define CLR(x) memset(x,0,sizeof(x))
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,a,b) for(int i=(a);i<=(b);i++)
#define REPL(i,x) for(int i=0;x[i];i++)
#define PER(i,n) for(int i=(n)-1;i>=0;i--)
#define PER1(i,a,b) for(int i=(a);i>=(b);i--)
#define RI(x) scanf("%d",&x)
#define DRI(x) int x;RI(x)
#define RII(x,y) scanf("%d%d",&x,&y)
#define DRII(x,y) int x,y;RII(x,y)
#define RIII(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIIII(w,x,y,z) scanf("%d%d%d%d",&w,&x,&y,&z)
#define DRIII(x,y,z) int x,y,z;RIII(x,y,z)
#define RS(x) scanf("%s",x)
#define PIN(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')

int getday(int d,int m,int y){
    //y+[y/4]+[c/4]-2c+[26(m+1)/10]+d-1
    int c=y/100;
    y=y%100;
    //
    int res=(c/4)-2*c+(y+y/4)+(13*(m+1)/5)+d-1;
    //int res=y%100+(y%100)/4+y/400-2*y/100+26*(m+1)/10+d-1;
    return (res%7+7)%7;
}
int n,num[8];
int d,m,y;
int main() {
   read;
    write;
  // while(scanf("%d%d%d",&d,&m,&y)){
  // printf("%d\n",getday(d,m,y));
  // }

    scanf("%d",&n);
    CLR(num);

    FOR(i,1900,1900+n-1){
        FOR(j,13,14){
            num[getday(13,j,i-1)]++;
        }//上一年 13,14
        FOR(j,3,12){
            num[getday(13,j,i)]++;
        } //本年
    }
    PIS(num[6]);
    PIS(num[0]);
    FOR(i,1,5){
       if(i!=5) PIS(num[i]);
       else PIN(num[i]);
    }

    //w = (d + 2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    return 0;
}
