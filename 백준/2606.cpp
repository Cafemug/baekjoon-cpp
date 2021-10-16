#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX=101;
vector<int> v[MAX];
int cnt=0;
bool check[MAX];
void dfs(int root){
    check[root]=true;
    int len=v[root].size();
    for(int i=0;i<len;i++){
        int y=v[root][i];
        if(!check[y]){
            cnt++;
            dfs(y);
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0; i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout<<cnt;
}