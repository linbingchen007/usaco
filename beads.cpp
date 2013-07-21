/*
ID: linbing3
PROG: beads
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("beads.in","r",stdin)
#define write           freopen("beads.out","w",stdout)
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
const int maxn=355;
int n;
char buf[maxn];
int vis[maxn];
int f1,f2,n1,n2,map[maxn],ans;
void dfsleft(int i){
    if(!vis[i]){
        if(f1){
            if(map[i]&&map[i]!=f1){
                return;
            }
        }else{
            f1=map[i];
        }
        vis[i]=1;
        n1++;
        dfsleft(i==0? n-1:i-1);
    }
}
void dfsright(int i){
    if(!vis[i]){
        if(f2){
            if(map[i]&&map[i]!=f2){
                return;
            }
        }else{
            f2=map[i];
        }
        vis[i]=1;
        n2++;
        dfsright(i==n-1? 0:i+1);
    }
}
int main() {
    read;
     write;
    RI(n);
    scanf("%s",buf);
    FOR(i,0,n-1) {
        if(buf[i]=='b') map[i]=1;
        if(buf[i]=='r') map[i]=2;
    }
    ans=-1;
    FOR(i,0,n-1){
        CLR(vis);
        f1=0;//0δͿɫ 1 b 2 r
        n1=n2=0;
        dfsleft(i);
        f2=0;
        dfsright(i==(n-1)? 0:i+1);
        ans=max(ans,n1+n2);
    }
    PIN(ans);
    return 0;
}
