#include <iostream>
#include <queue>
using namespace std;
const int MAX=100003;
int arr[MAX];
bool check[MAX];
queue<int> q;
int idx[]={1,-1,2};
int n,m,res=0;
void bfs(int x,int y){
    check[x]=true;
    q.push(x);
    while(!q.empty()){
        int len=q.size();
        for(int i=0;i<len;i++){
            int tk=q.front();
            if(tk==y)
                return;
            q.pop();
            for(int g=0;g<3;g++){
                if(g!=2){
                    int nx=tk+idx[g];
                    if(nx<0 || nx>100001)
                        continue;
                    if(!check[nx]){
                        check[nx]=true;
                        q.push(nx);
                    }
                }
                else{
                    int nx=tk*idx[g];
                    if(nx<0 || nx>100001)
                        continue;
                    if(!check[nx]){
                        check[nx]=true;
                        q.push(nx);
                        //res++;
                    }
                }
            }
            
        }
        res++;
    }
}
int main(){
    cin>>n>>m;
    bfs(n,m);
    cout<<res;
}