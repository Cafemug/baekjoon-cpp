#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;
const int MAX=100001;
int parent[MAX]={0,};
bool check[MAX];
int depth[MAX];
int main(){
    int num,a,b;
    queue<int> q;
    vector<int> v[MAX];
    cin>>num;

    for(int x=0;x<num-1;x++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    depth[1]=0;
    check[1]=true;
    q.push(1);
    parent[1]=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int len=v[x].size();
        for(int t=0;t<len;t++){
            int y=v[x][t];
            if(!check[y]){
                depth[y]=depth[x]+1;
                check[y]=true;
                parent[y]=x;
                q.push(y);
            }
            

        }
    }

    for(int i=2;i<=num;i++){
        cout<<parent[i]<<"\n";
    }

}