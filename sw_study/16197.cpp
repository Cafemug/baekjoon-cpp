#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
int idx[] = {0,0,1,-1};
int idy[] = {1,-1,0,0};
int x,y;
char b[21][21];
int go(int step, int x1, int y1, int x2, int y2) {
    if (step == 11) return -1;
    bool fall1=false, fall2=false;
    if (x1 < 0 || x1 >= x || y1 < 0 || y1 >= y) fall1 = true;
    if (x2 < 0 || x2 >= x || y2 < 0 || y2 >= y) fall2 = true;
    if (fall1 && fall2) return -1;
    if (fall1 || fall2) return step;
    int ans = -1;
    for (int k=0; k<4; k++) {
        int nx1 = x1+idx[k];
        int ny1 = y1+idy[k];
        int nx2 = x2+idx[k];
        int ny2 = y2+idy[k];
        if (0 <= nx1 && nx1 < x && 0 <= ny1 && ny1 < y && b[nx1][ny1] == '#') {
            nx1 = x1;
            ny1 = y1;
        }
        if (0 <= nx2 && nx2 < x && 0 <= ny2 && ny2 < y && b[nx2][ny2] == '#') {
            nx2 = x2;
            ny2 = y2;
        }
        
        int temp = go(step+1, nx1, ny1, nx2, ny2);
        if (temp == -1) continue;
        if (ans == -1 || ans > temp) {
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
    cout<<go(0,a1,b1,a2,b2);
}