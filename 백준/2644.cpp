#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int MAX=103;
vector<int> v[MAX];
queue<int> q;
bool check[MAX];
int n,m,a,b,res=0;
int bfs(int root){
    check[root]=true;
    q.push(root);
    while(!q.empty()){
        int rootlen=q.size();
        for(int k=0;k<rootlen;k++){
            int x=q.front();
            if(x==b)
                return res;
            q.pop();
            int len=v[x].size();
            for(int i=0;i<len;i++){
                int y=v[x][i];
                if(!check[y]){
                    check[y]=true;
                    q.push(y);
                    
                }
            }
        }
        res++;
    }
    return -1;
}
int main(){
    cin>>n;
    cin>>a>>b;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cout<<bfs(a);
}