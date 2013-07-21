/*
ID: linbing3
PROG: dualpal
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("dualpal.in","r",stdin)
#define write           freopen("dualpal.out","w",stdout)
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
#define CHE(x) dic[tail][i]=='x'
#define SC(fuc1,fuc2,fuc3) CHE(fuc1)||CHE(fuc2)||CHE(fuc3)
#define DO(x) buf[i]='x'
const int maxn=22;
int buf[maxn],tail;
int fuc[maxn],tf,tmp;
void con(int tmp,int B){
    while(tmp){
        buf[tail++]=tmp%B;
        tmp/=B;
    }
}
bool ispl(){
    FOR(i,0,(tail-1)/2){
        if(buf[i]!=buf[tail-i-1]) return false;
    }
    return true;
}
bool check(int tmp,int B){
    CLR(buf);
    tail=0;
    con(tmp,B);
    return ispl();
}
void print(int i,int B){
    tf=0;
    while(i){
        fuc[tf++]=i%B;
        i/=B;
    }
    FORD(i,tf-1,0){
        printf("%c",fuc[i]<=9? fuc[i]+'0':(fuc[i]-10+'A'));
    }

}
int N,S,num;
bool flag;
int main() {
    read;
    write;
    RII(N,S);
    for(int i=S+1;N;i++){
        num=0;
        flag=false;
        FOR(B,2,10){
            if(check(i,B)) num++;
            if(num>=2) flag=true;
        }
        if(flag) {
            PIN(i);
            N--;
        }
    }
    return 0;
}
