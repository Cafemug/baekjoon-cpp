#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    cout<<"<";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int y=q.front();
            q.pop();
            q.push(y);
        }
        cout<<q.front()<<", ";
        q.pop();
    }
    cout<<q.front()<<">";
}