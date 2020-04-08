#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int d[61][61][61];
int scv[3]={0,};
int go(int a, int b, int c){
    if(a<0) return go(0,b,c);
    if(b<0) return go(a,0,c);
    if(c<0) return go(a,b,0);
    if(a==0 && b==0 && c==0) return 0;
    int &idx = d[a][b][c];
    if(idx != -1) return idx;
    idx = 123;
    vector<int> p={1,3,9};
    do {
        if (idx > go(a-p[0], b-p[1], c-p[2])) {
            idx = go(a-p[0], b-p[1], c-p[2]);
        }
    } while(next_permutation(p.begin(), p.end()));
    idx += 1;
    return idx;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>scv[i];
    }
    memset(d,-1,sizeof(d));
    cout << go(scv[0], scv[1], scv[2]) << '\n';
}