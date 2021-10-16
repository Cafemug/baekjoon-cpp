#include <iostream>
#include <queue>
using namespace std;
long f,s,g,u,d,res=0;
queue<long> q;
long arr[1000002];
bool check[1000002];
long bfs(int root){
    check[root]=true;
    q.push(root);
    while(!q.empty()){
        int rootlen=q.size();
        for(int i=0;i<rootlen;i++){
            int x=q.front();
            // cout<<x<<"\n";
            if(x==g)
                return 0;
            q.pop();
            if(x+u>f){
                if(x-d>=1){
                    if(!check[x-d]){
                        check[x-d]=true;
                        q.push(x-d);
                    }
                }
                continue;
            }
            if(x-d<1){
                if(x+u<=f){
                   if(!check[x+u]){
                        check[x+u]=true;
                        q.push(x+u);
                    } 
                }
                continue;
            }
            if(!check[x+u]){
                check[x+u]=true;
                q.push(x+u);
            }
            if(!check[x-d]){
                check[x-d]=true;
                q.push(x-d);
            }
        }
        res++;
    }
    return -1;
}
int main(){
    cin>>f>>s>>g>>u>>d;
    int sk=bfs(s);
    if(sk==-1)
        cout<<"use the stairs";
    else
        cout<<res;
}