#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
int idx[] = {0,0,1,-1};
int idy[] = {1,-1,0,0};
int x,y;
char b[21][21];
int go(int x1, int y1, int x2, int y2, int count){
    int ans = -1;
    if(count>=11){
        return -1;
    }
    for(int i=0;i<4;i++){
        int ix1 =x1 + idx[i];
        int iy1 =y1 + idy[i];
        int ix2 =x2 + idx[i];
        int iy2 =y2 + idy[i];
        if((ix1>=x || ix1<0 || iy1<0 || iy1>=y) || (ix2>=x || ix2<0 || iy2<0 || iy2>=y)){
            return count+1;
        }
        if((ix2>=x || ix2<0 || iy2<0 || iy2>=y) &&(ix1>=x || ix1<0 || iy1<0 || iy1>=y)) return -1;
        if(b[ix1][iy1] =='#'){
            ix1=x1;
            iy1=y1;
        }
        if(b[ix2][iy2] == '#'){
            ix2=x2;
            iy2=y2;
        }
        int temp = go(ix1,iy1,ix2,iy2,count+1);
        if(temp == -1) continue;
        if(ans == -1 || ans>temp){
            ans = temp;
        }
    }
    return ans;
}
int main(){
    vector<pair<int, int>> v;
    cin>>x>>y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>b[i][j];
            if(b[i][j]=='o')
                v.push_back(make_pair(i,j));
        }
    }
    int a1,b1,a2,b2;
    tie(a1,b1) = v[0];
    tie(a2,b2) = v[1];
    cout<<go(a1,b1,a2,b2,0);
}