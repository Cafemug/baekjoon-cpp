#include <iostream>
#include <vector>
using namespace std;
bool check[2001];
int num,sen,idx=0;
vector<pair<int, int > > v[2001];
void dfs(int n,int x){
    if(n>num) return;
    if(n==num && x>=5)idx=1;
    check[n]=true;
    int len = v[n].size();
    for(int i=0;i<len;i++){
        pair<int, int> p = v[n][i];
        if(check[p.first]) continue;
        check[p.first] = true;
        v[n][i].second+=1;
        dfs(p.first, p.second+1);

    }

}
int main(){
       cin>>num>>sen;
       int t;
       for(int i=0;i<sen;i++){
           int a,b;
           t=a;
           cin>>a>>b;
           v[a].push_back(make_pair(b,0));
           v[b].push_back(make_pair(a,0));
       }
       dfs(t,0);
       cout<<idx;
}