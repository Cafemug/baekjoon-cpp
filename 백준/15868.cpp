#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct pos{
    int x,y;
};
int ret;
int n,m,type;
vector<pos> house,chi,pick;
pos temp;
void dfs(int pos){
    if(pick.size()==m){
        int tempsize=0;
        for(int k=0;k<house.size();k++){
            int gg=100000;
            for(int t=0;t<m;t++){
                gg=min(gg,abs(pick[t].x-house[k].x)+abs(pick[t].y-house[k].y));
                
            }
            tempsize+=gg;
        }
        if(tempsize<ret)
                ret=tempsize;
        return;
    }else{
        for(int i=pos;i<chi.size();i++){
            pick.push_back(chi[i]);
            dfs(i+1);
            pick.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>type;
            if(type==1){
                temp.x=i,temp.y=j;
                house.push_back(temp);
            }
            else if(type==2){
                temp.x=i,temp.y=j;
                chi.push_back(temp);
            }
        }
    }
    ret = 0x7fffffff;
    dfs(0);
    cout<<ret;
}