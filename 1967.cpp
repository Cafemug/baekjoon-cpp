#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;
const int MAX=10001;
struct tree{
    int next;
    int length;
};

bool check[MAX];
bool check2[MAX];
int depth[MAX];
int depth2[MAX];
int main(){
    int num,a,b,c,reslen=0,reslen2=0,temp,idx,idx2;
    queue<int> q;
    queue<int> q2;
    vector<tree> v[MAX];
    vector<tree> v2[MAX];
    cin>>num;
    tree tk;
    for(int x=0;x<num-1;x++){
        cin>>a>>b>>c;
        
        tk.next=b;
        tk.length=c;
        v[a].push_back(tk);
        v2[a].push_back(tk);
        tk.next=a;
        tk.length=c;
        v[b].push_back(tk);
        v2[b].push_back(tk);
        
    }
    check[1]=true;
    depth[1]=0;
    q.push(1);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int len=v[x].size();
        for(int t=0;t<len;t++){
            int y=v[x][t].next;
            if(!check[y]){
                v[x][t].length+=depth[x];
                temp=v[x][t].length;
                if(reslen<=temp){
                    reslen=temp;
                    idx=y;
                }
                check[y]=true;
                depth[y]=v[x][t].length;
                q.push(y);
            }
            

        }
    }

    // cout<<idx<<"\n";
    check2[idx]=true;
    depth2[idx]=0;
    q2.push(idx);
    while(!q2.empty()){
        int x=q2.front();
        q2.pop();
        int len=v2[x].size();
        for(int t=0;t<len;t++){
            int y=v2[x][t].next;
            if(!check2[y]){
                v2[x][t].length+=depth2[x];
                temp=v2[x][t].length;
                if(reslen2<=temp){
                    reslen2=temp;
                    idx2=y;
                }
                check2[y]=true;
                depth2[y]=v2[x][t].length;
                q2.push(y);
            }
            

        }
    }
    cout<<reslen2;
    // cout<<reslen+reslen2;

}