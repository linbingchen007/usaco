/*
ID: linbing3
PROG: transform
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("transform.in","r",stdin)
#define write           freopen("transform.out","w",stdout)
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
const int maxn=22;
#define RELEX(abc,def)  FOR(i,1,n)  FOR(j,1,n)   abc[i][j]=def[i][j]
#define INPUT(cnm) FOR(i,1,n)  FOR(j,1,n)   scanf("%c",&cnm[i][j])
#define GUNDAN(cnm) if(check()){  PIN(cnm); return 0; }
int n;
char buf[maxn][maxn],s[maxn][maxn],t[maxn][maxn],tmp[maxn][maxn];
bool check(){
    FOR(i,1,n)  FOR(j,1,n) if(buf[i][j]!=t[i][j]) return false;
    return true;
}
void rot90(){  //改变的是buf
    FOR(i,1,n){
        FOR(j,1,n){
            tmp[j][1+n-i]=buf[i][j];
        }
    }
    RELEX(buf,tmp);
}
void ref(){
    FOR(i,1,n){
        FOR(j,1,n){
            tmp[i][1+n-j]=buf[i][j];
        }
    }
    RELEX(buf,tmp);
}
int main() {
    read;
    write;
    RI(n);
    FOR(i,1,n)  FOR(j,1,n)   cin>>s[i][j];//scanf("%c",&s[i][j]);
    FOR(i,1,n)  FOR(j,1,n)   cin>>t[i][j];
    //INPUT(s);
    //INPUT(t);
    RELEX(buf,s);
    rot90();
    GUNDAN(1);
    rot90();
    GUNDAN(2);
    rot90();
    GUNDAN(3);
    RELEX(buf,s);
    ref();
    GUNDAN(4);
    rot90();
    GUNDAN(5);
    rot90();
    GUNDAN(5);
    rot90();
    GUNDAN(5);
    RELEX(buf,s);
    GUNDAN(6);
    PIN(7);
    return 0;
}
