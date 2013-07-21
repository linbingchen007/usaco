/*
ID: linbing3
PROG: milk
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("milk.in","r",stdin)
#define write           freopen("milk.out","w",stdout)
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

const int maxn=5002;
struct _m{
    int p,a;
};
_m milk[maxn];
int cmp(_m aa,_m bb){
    return aa.p<bb.p;
}
int N,M,tmp,ans;
int main() {
    read;
    write;
    RII(N,M);
    FOR(i,1,M){
        RII(milk[i].p,milk[i].a);
    }
    sort(milk+1,milk+1+M,cmp);
    tmp=N;
    ans=0;
    FOR(i,1,M){
        if(tmp>=milk[i].a) {
            ans+=milk[i].p*milk[i].a;
            tmp-=milk[i].a;
        }else{
            ans+=milk[i].p*tmp;
            tmp=0;
            break;
        }
    }
    PIN(ans);
    return 0;
}
