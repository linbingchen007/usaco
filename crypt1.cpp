/*
ID: linbing3
PROG: crypt1
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("crypt1.in","r",stdin)
#define write           freopen("crypt1.out","w",stdout)
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

const int maxn=222;
int buf[11];
int n,ans,a,c,d,e;
bool flag;
int vis[11];
bool check(int x,int wei){
    int tmp,dig=0;
    while(x){
        dig++;
        tmp=x%10;
        x/=10;
        if(!vis[tmp]) return false;
    }
    if(dig==wei)
    return true;
    else return false;
}
void print(int b){
    PIS(a);PIS(b);PIS(c);PIS(d);PIN(e);
}
int main() {
    read;write;
   RI(n);
   CLR(vis);
   FOR(i,1,n){
       RI(buf[i]);
       vis[buf[i]]=1;
   }
   ans=0;
   FOR(i,1,n){
       FOR(j,1,n){
           FOR(k,1,n){
               a=buf[i]*100+buf[j]*10+buf[k];
               FOR(l,1,n){ //b的十位
                   FOR(m,1,n){//b的个位
                       c=a*buf[m];
                       d=a*buf[l];
                       e=d*10+c;
                       flag=check(c,3)&&check(d,3)&&check(e,4);
                       if(flag) ans++;
                   }
               }
           }
       }
   }
   PIN(ans);
   return 0;
}
