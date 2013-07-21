/*
ID: linbing3
PROG: gift1
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <string>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("gift1.in","r",stdin)
#define write           freopen("gift1.out","w",stdout)
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
#define maxn 200002

map<string,int> lis;
int np;
int les[maxn],ol[maxn];
char name[maxn][16];
int id,b,a,rem,div1;
char buf[16];
int main() {
    read;
     write;
    RI(np);
    FOR(i,1,np) {
        scanf("%s",buf);
        memcpy(name[i],buf,sizeof(buf));
        lis[buf]=i;
    }
    CLR(les);
    FOR(i,1,np) {
        scanf("%s",buf);
        id=lis[buf];
        scanf("%d%d",&ol[id],&b);
        a=ol[id];
        if(b) {
            rem=a%b;
            div1=a/b;
            les[id]+=rem;
            FOR(j,1,b) {
                scanf("%s",buf);
                id=lis[buf];
                les[id]+=div1;
            }
        }
        else {
            les[id]+=a;
        }
    }
    FOR(i,1,np) {
        printf("%s %d\n",name[i],les[i]-ol[i]);
    }
    return 0;
}
