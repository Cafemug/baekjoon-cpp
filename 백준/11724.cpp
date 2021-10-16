#include <iostream>
#include <vector>
using namespace std;
const int MAX=1003;
int n,m,res=0;
bool check[MAX];
vector<int> v[MAX];
void dfs(int root){
    if(root>n)
        return;
    check[root]=true;
    int len=v[root].size();
    for(int i=0;i<len;i++){
        int y=v[root][i];
        if(!check[y])
            dfs(y);
    }
}
int main(){
    cin>>n>>m;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!check[i]){
            dfs(i);
            res++;
        }
    }
    cout<<res;
}