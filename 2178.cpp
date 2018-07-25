#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
const long long int MAX=1002;
char arr[MAX][MAX];
struct three{
    long long int first;
    long long int second;
    long long int cnt;
};
queue<three> q;
three pr;
long long int cnt=0,res;
long long int n,m;
long long int idx[]={0,0,1,-1};
long long int idy[]={1,-1,0,0};
bool check[MAX][MAX];
void bfs(long long int x,long long int y){
    check[x][y]=true;
    while(!q.empty()){
        pr=q.front();
        long long int i=pr.first;
        long long int j=pr.second;
        long long int cnt=pr.cnt;
        q.pop();
        for(long long int t=0;t<4;t++){
            long long int nx=i+idx[t];
            long long int ny=j+idy[t];
            //cnt++;
           // cout<<nx<<" "<<ny<<"\n";
                pr.first=nx;
                pr.second=ny;
                pr.cnt=cnt+1;
            if(nx<0 || nx>=n || ny<0 || ny>=m || arr[nx][ny]=='0')
                continue;
            if(!check[nx][ny]){
                if(nx==n-1 && ny==m-1){
                res=pr.cnt;
                return;
            }
               
                check[nx][ny]=true;
              
                q.push(pr);
            }
        }
    }
}
int main(){
    
    cin>>n>>m;
    for(long long int i=0;i<n;i++){
       scanf("%s",arr[i]);
    }

   
    pr.first=0;
    pr.second=0;
    pr.cnt=1;
    q.push(pr);
    bfs(0,0);
    cout<<res;
}