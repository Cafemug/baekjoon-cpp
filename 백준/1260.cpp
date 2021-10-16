#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <cstdio>
using namespace std;
vector<int> v[1001];
queue<int> q;
bool check[1001];
void bfs(int r){
    memset(check,false,sizeof(check));
    q.push(r);
    check[r]=true;
    while(!q.empty()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        int len=v[x].size();
        for(int y=0;y<len;y++){
            int t=v[x][y];
            if(!check[t]){
                
                check[t]=true;
                q.push(t);
            }       
        }
    }
}
void dfs(int r){
    check[r]=true;
    cout<<r<<" ";
    int len=v[r].size();
    for(int y=0;y<len;y++){
        int t=v[r][y];
        if(!check[t]){
            dfs(t);
        }       
    }
}
int main(){
    int n,a,root;
    int x,y;
    cin>>n>>a>>root;
    for(int i=0;i<a;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i=1; i<=n; i++) {
        sort(v[i].begin(), v[i].end());
    }
    dfs(root);
    cout<<"\n";
    bfs(root);
}