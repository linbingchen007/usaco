/*
ID: linbing3
PROG: milk2
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("milk2.in","r",stdin)
#define write           freopen("milk2.out","w",stdout)
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
struct _sec{
    int s,t;
};
_sec sec[maxn],tmp;
int n,ans1,ans2;
int cmp(_sec a,_sec b){
    if(a.s!=b.s) return a.s<b.s;
    else return a.t<b.t;
}

int main() {
    read;
     write;
    RI(n);
    FOR(i,1,n){
        RII(sec[i].s,sec[i].t);
    }
    vector<_sec> con;
    sort(sec+1,sec+1+n,cmp);

    tmp.s=sec[1].s;
    tmp.t=sec[1].t;
    FOR(i,2,n){
        if(sec[i].s<=tmp.t) tmp.t=max(sec[i].t,tmp.t);
        else {
            con.push_back(tmp);
            tmp.s=sec[i].s;
            tmp.t=sec[i].t;
        }
    }
    con.push_back(tmp);
    ans1=ans2=0;
    FOR(i,0,con.size()-1){
        //printf("%d %d!!!\n",con[i].s,con[i].t);
        ans1=max(ans1,con[i].t-con[i].s);
        if(i>=1)  ans2=max(ans2,con[i].s-con[i-1].t);
    }
    PIS(ans1);
    PIN(ans2);
    return 0;
}
