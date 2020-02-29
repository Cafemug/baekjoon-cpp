#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
queue<int> q;
bool c[100001];
int d[100001];
int w[100001];
int n,k;
void recur(int x){
    if(x==-1) return;
    recur(w[x]);
    cout<<x<<" ";
}
int main(){
    memset(w,-1,sizeof(w));
    cin>>n>>k;
    c[n]=true;
    q.push(n);
    while(!q.empty()){
        int x =q.front();
        q.pop();
        if(x-1>=0){
            if(!c[x-1]){
                d[x-1]=d[x]+1;
                w[x-1]=x;
                q.push(x-1);
                c[x-1]=true;
            }
        }
        if(x+1<=100000){
            if(!c[x+1]){
                d[x+1]=d[x]+1;
                w[x+1]=x;
                q.push(x+1);
                c[x+1]=true;
            }
        }
        if(x*2<=100000){
            if(!c[x*2]){
                d[x*2]=d[x]+1;
                w[x*2]=x;
                q.push(x*2);
                c[x*2]=true;
            }
        }
    }
    cout<<d[k]<<"\n";
    recur(k);
}