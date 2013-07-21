/*
ID: linbing3
PROG: barn1
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("barn1.in","r",stdin)
#define write           freopen("barn1.out","w",stdout)
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
int buf[maxn];
int d[maxn];
int M,S,C,l,r,ans;
int main() {
    read;write;
    RIII(M,S,C);
    FOR(i,1,C){
        RI(buf[i]);
    }

    sort(buf+1,buf+1+C);
    l=buf[1];
    r=buf[C];
    FOR(i,2,C){
        d[i-1]=buf[i]-buf[i-1]-1;
    }
    sort(d+1,d+C+1-1);
    ans=r-l+1;
    FORD(i,C-1,max(C-M+1,1)){
        ans-=d[i];
    }
    PIN(ans);
    return 0;
}
