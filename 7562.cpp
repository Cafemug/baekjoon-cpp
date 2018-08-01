#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int MAX=305;
queue<pair<int , int> > q;
pair<int,int> pr;
int arr[MAX][MAX];
int t,n,res=0;
int idx[]={-2,-1,2,1,-2,-1,2,1};
int idy[]={1,2,1,2,-1,-2,-1,-2};
bool check[MAX][MAX];
int bfs(int a,int b,int c,int d){
    check[a][b]=true;
    pr.first=a;
    pr.second=b;
    q.push(pr);
    while(!q.empty()){
        int len=q.size();
        for(int sk=0;sk<len;sk++){
            pr=q.front();
            q.pop();
            int x=pr.first;
            int y=pr.second;
            
            if(x==c && y==d)
                return 0;
            for(int i=0;i<8;i++){
                int nx=x+idx[i];
                int ny=y+idy[i];
                if(nx<0 || nx>=n || ny>=n || ny<0)
                    continue;
                if(!check[nx][ny]){
                    check[nx][ny]=true;
                    
                    pr.first=nx;
                    pr.second=ny;
                    q.push(pr);
                        
                }
            }
        }
        res++;
    }
    
    return -1;
}
int main(){
    cin>>t;
    while(t-->0){
        memset(check,false,sizeof(check));
        while(!q.empty()){
            q.pop();
        }
        res=0;
        cin>>n;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int temp=bfs(a,b,c,d);
        if(temp==-1){
            cout<<0<<"\n";
        }
        else{
            cout<<res<<"\n";
        }
    }
}