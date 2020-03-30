#include <iostream>
using namespace std;
int board[21][21];
int idx[]={0,0,0,-1,1};
int idy[]={0,1,-1,0,0};
int dice[6];
int n,m,x,y,count;
void find(int index){
    int ix = x+idx[index];
    int iy = y+idy[index];
    if(ix>=n || ix<0 || iy>=m || iy<0) return;
    if(index == 1){
        int temp = dice[2];
        dice[2] = dice[0];
        dice[0] = dice[4];
        dice[4] = dice[5];

        if(board[ix][iy]==0){
            board[ix][iy] = temp;
            dice[5]=temp;
        }else{
            dice[5]=board[ix][iy];
            board[ix][iy]=0;
        }
    }
    else if(index == 2){
        int temp = dice[4];
        dice[4] = dice[0];
        dice[0] = dice[2];
        dice[2] = dice[5];

        if(board[ix][iy]==0){
            board[ix][iy] = temp;
            dice[5]=temp;
        }else{
            dice[5]=board[ix][iy];
            board[ix][iy]=0;
        }
    }
    else if(index == 3){
        int temp = dice[3];
        dice[3] = dice[0];
        dice[0] = dice[1];
        dice[1] = dice[5];

        if(board[ix][iy]==0){
            board[ix][iy] = temp;
            dice[5]=temp;
        }else{
            dice[5]=board[ix][iy];
            board[ix][iy]=0;
        }
    }
    else if(index == 4){
        int temp = dice[1];
        dice[1] = dice[0];
        dice[0] = dice[3];
        dice[3] = dice[5];

        if(board[ix][iy]==0){
            board[ix][iy] = temp;
            dice[5]=temp;
        }else{
            dice[5]=board[ix][iy];
            board[ix][iy]=0;
        }
    }
    x= ix;
    y= iy;
    cout<<dice[0]<<"\n";

}
int main(){
    cin>>n>>m>>x>>y>>count;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    for(int i=0;i<count;i++){
        int temp;
        cin>>temp;
        find(temp);
    }
}