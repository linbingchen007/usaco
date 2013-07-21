/*
ID: linbing3
PROG: calfflac
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("calfflac.in","r",stdin)
#define write           freopen("calfflac.out","w",stdout)
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
char text[20003];
struct _p{
    int pos;
    char val;
};
_p buf[20003];
int tail,t2,ans,key,ansl,ansr;
int main() {
   read;write;
    tail=0;
    t2=0;
    while((text[tail++]=getchar())!=EOF){
        if(text[tail-1]>='a'&&text[tail-1]<='z'){
            buf[t2].pos=tail-1;
            buf[t2++].val=text[tail-1];

        }else if(text[tail-1]>='A'&&text[tail-1]<='Z'){
            buf[t2].pos=tail-1;
            buf[t2++].val=text[tail-1]-'A'+'a';
        }
    }
    text[tail]='\0';
    ans=-1;
    FOR(i,0,t2-1){
        //#1
        int j;
        for(j=i-1;j>=0&&(i+i-j<=t2-1);j--){
            if(buf[j].val!=buf[i+i-j].val){
                key=2*(i-j-1)+1;
                break;
            }
        }
        if(!(j>=0&&(i+i-j<=t2-1))) key=2*(i-j-1)+1;
        if(key>ans){
            ans=key;
            ansl=j+1;
            ansr=2*i-j-1;
        }
        //#2
        for(j=i+1;j+1<=t2-1&&2*i+1-j>=0;j++){
            if(buf[j].val!=buf[2*i+1-j].val){
                key=(j-1-i)*2;
                break;
            }
        }
        if(!(j+1<=t2-1&&2*i+1-j>=0))  key=(j-1-i)*2;
        if(key>ans){
            ans=key;
            ansl=2*i-j+2;
            ansr=j-1;
        }
    }
    PIN(ans);
    FOR(i,buf[ansl].pos,buf[ansr].pos) putchar(text[i]);
    puts("");
    return 0;
}
