#include <iostream>
#include <cstring>
using namespace std;
const long val = 1000000007;
long long d[51][51][51][51];
int go(int s, int a, int b, int c){
    if(s==0){
        if(a==0 && b==0 && c==0) return 1;
        else return 0;
    }
    if(a<0 || b<0 || c<0) return 0;
    long long &idx = d[s][a][b][c];
    if(idx!=-1) return idx;
    idx=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                if(i+j+k==0) continue;
                idx+=go(s-1,a-i,b-j,c-k);
            }
        }
    }
    idx %=val;
    return idx;
}
int main(){
    int s,a,b,c;
    cin>>s>>a>>b>>c;
    memset(d,-1,sizeof(d));
    cout << go(s,a,b,c) << '\n';
}