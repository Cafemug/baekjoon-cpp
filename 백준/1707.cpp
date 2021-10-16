#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int MAX=20003;
vector<int> v[MAX];
bool idx=true;
int color[MAX];
void dfs(int x,int y){
    color[x]=y;
    int len=v[x].size();
    for(int t=0;t<len;t++){
        int k=v[x][t];
        if(color[k]==-1){
            if(y==0){
                dfs(k,1);
            }
            else{
                dfs(k,0);
            }
        }
    }
}
int main(){
    int n,m,a,b,num;
    cin>>num;
    while(num-->0){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        v[i].clear();
        color[i]=-1;     
    }
    idx=true;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);        
    }
    for(int i=1;i<=n;i++){
        if(color[i]==-1){
            dfs(i,0);
        }    
    }
    for(int i=1; i<=n; i++){
        int len=v[i].size();
            for(int j=0; j<len; j++){
                int k = v[i][j];
                if(color[i]==color[k])
                    idx=false;
            }
        }
    if(idx){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

    }  
}