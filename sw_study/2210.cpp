#include <iostream>
#include <set>
using namespace std;
set<int> s;
int board[5][5];
int idx[] = {0,0,1,-1};
int idy[] = {1,-1,0,0};
void go(int x, int y, int num, int len){
    if(len==6){
        s.insert(num);
        return ;
    }
    for(int i=0;i<4;i++){
        int ix = x+idx[i];
        int iy = y+idy[i];
        if(ix<0 || ix>=5 || iy<0 || iy>=5) continue;
        go(ix,iy, num*10+ board[ix][iy], len+1);
    }
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>board[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            go(i,j,board[i][j],1);
        }
    }
    cout<<s.size();
}