#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int MAX=100003;
vector<int> v[MAX];
queue<int> q;
bool check[MAX];
bool idx;
int color[MAX];
void bfs(int root,int y){
    check[root]=true;
    color[root]=y;
    q.push(root);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        check[temp]=true;
        int len=v[temp].size();
        for(int k=0;k<len;k++){
            int te=v[temp][k];
            if(color[te]!=-1){
                if(color[temp]==color[te])
                    idx=false;
            }
            if(!check[te]){
                if(color[temp]==1){
                    color[te]=0;
                }
                else{
                    color[te]=1;
                }
                check[te]=true;
                q.push(te);
            }
        }
    }
}
int main(){
    int n,m,a,b,num;
    cin>>num;
    while(num-->0){
        while(!q.empty()){
            q.pop();
        }
        idx=true;
        cin>>n>>m;

        for(int i=0;i<m;i++){
            cin>>a>>b;
            color[i]=-1;
            check[i]=false;
            v[a].push_back(b);
            v[b].push_back(a);        
        }
        memset(check,false,sizeof(check));
        memset(color,-1,sizeof(color));
        bfs(a,0);
        if(idx){
            cout<<"possible\n";
        }
        else{
            cout<<"impossible\n";
            idx=true;
            
        }
        for(int i=1;i<=n;i++){
            v[i].clear();       
        }
        // for(int i=0;i<m;i++){
        //     v[i].clear();       
        // }
        }
    
}
