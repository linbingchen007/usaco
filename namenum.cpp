/*
ID: linbing3
PROG: namenum
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include <map>
#include <queue>
#include<algorithm>
#include<cstring>
using namespace std;
#define read            freopen("namenum.in","r",stdin)
#define write           freopen("namenum.out","w",stdout)
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
char dic[5000][15];
multimap<string,string> lis;
char buf[15];
int tail;
int main() {

    freopen("dict.txt","r",stdin);
    tail=0;
    while(~scanf("%s",dic[tail])){
        CLR(buf);
        FOR(i,0,strlen(dic[tail])-1){
            if(dic[tail][i]=='A'||dic[tail][i]=='B'||dic[tail][i]=='C'){
                buf[i]='2';
            }else if(dic[tail][i]=='D'||dic[tail][i]=='E'||dic[tail][i]=='F'){
                buf[i]='3';
            }else if(dic[tail][i]=='G'||dic[tail][i]=='H'||dic[tail][i]=='I'){
                buf[i]='4';
            }else if(dic[tail][i]=='J'||dic[tail][i]=='K'||dic[tail][i]=='L'){
                buf[i]='5';
            }else if(dic[tail][i]=='M'||dic[tail][i]=='N'||dic[tail][i]=='O'){
                buf[i]='6';
            }else if(dic[tail][i]=='P'||dic[tail][i]=='R'||dic[tail][i]=='S'){
                buf[i]='7';
            }else if(dic[tail][i]=='T'||dic[tail][i]=='U'||dic[tail][i]=='V'){
                buf[i]='8';
            }else if(dic[tail][i]=='W'||dic[tail][i]=='X'||dic[tail][i]=='Y'){
                buf[i]='9';
            }else{
                goto cnmb;
            }
        }
        lis.insert(pair<string,string>(buf,dic[tail]));
        cnmb:
        //lis[buf]=dic[tail];
        tail++;
    }
    read;
    write;
    scanf("%s",buf);
    //string a;
     pair<multimap<string, string>::iterator, multimap<string, string>::iterator> ppp;
     ppp=lis.equal_range(buf);
    if(lis.count(buf)){
        for(multimap<string,string>::iterator iter=ppp.first;iter!=ppp.second;++iter){
            cout<<(*iter).second<<endl;
        }
    }
    //cout<<lis.count(buf)<<endl;
    else puts("NONE");
    return 0;
}
