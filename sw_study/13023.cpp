#include <iostream>
#include <vector>
using namespace std;
bool check[2001];
int num,sen,idx=0;
vector<pair<int, int > > v[2001];
void dfs(int n,int x){
    // cout<<"n "<<n<<" x "<<x<<"\n";
    if(n>num) return;
    if (x>=4){
        idx=1;
        return;
    }
    int len = v[n].size();
    for(int i=0;i<len;i++){
        pair<int, int> p = v[n][i];
        if(check[p.first]) continue;
        check[p.first] = true;
        // cout<<p.first<<" first "<<v[n][i].second<<"\n";
        v[n][i].second=(x+1);
        // cout<<p.first<<" second "<<(x+1)<<"\n";
        dfs(p.first, x+1);
        check[p.first] = false;
        v[n][i].second=p.second;

    }

}
int main(){
       cin>>num>>sen;
       for(int i=0;i<sen;i++){
           int a,b;
           cin>>a>>b;
           v[a].push_back(make_pair(b,0));
           v[b].push_back(make_pair(a,0));
       }
       dfs(0,0);
       cout<<idx;
}