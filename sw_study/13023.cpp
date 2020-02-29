#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int n,m;
int d[2001];
bool check[2001];
queue<int> q[2001];
queue<int> nest_q;
int main(){
    int start;
    cin>>n>>m;
    while(m--){
        int x,y;
        start=x;
        cin>>x>>y;
        q[x].push(y);
        q[y].push(x);    
    }
    nest_q.push(start);
    check[start]=true;
    while(!nest_q.empty()){
        int x=nest_q.front();
        nest_q.pop();
        int len=q[x].size();
        for(int w=0;w<len;w++){
            if(check[w]) continue;
            d[w]=d[x]+1;
            nest_q.push(w);
        }
    }
    for(int i=0;i<n;i++){
        if(d[i]>=4){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
}