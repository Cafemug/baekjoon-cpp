#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
string p;
string temp;
vector<string> res;
int tlen, plen;
int d[101][101] = {-1,};
int find(int x, int y){
    if(x>=plen)
        return y==tlen;
    int& r = d[x][y];
    if(r!=-1)
        return r;
    if(p[x] == '*')
        return r = (find(x+1, y) == 1 || find(x, y+1) == 1);
    if(p[x]==temp[y])
        return r = find(x+1,y+1);
    return r = false;
}
int main(){
    int n;
    cin>>p;
    cin>>n;
    plen = p.size();
    while(n-->0){
        memset(d, -1, sizeof(d));
        cin>>temp;
        tlen = temp.size();
        if(find(0, 0) == 1)
            res.push_back(temp);
    }
    int len = res.size();
    for(int i = 0 ; i < len; ++i){
        cout<<res[i]<<"\n";
    }
}