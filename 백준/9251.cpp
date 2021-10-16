#include <iostream>
using namespace std;
int d[1001][1001]={0,};
int main(){
    string a,b;
    cin>>a>>b;
    int lena = a.size();
    int lenb = b.size();
    for(int x=1;x<=lena;x++){
        for(int y=1;y<=lenb;y++){
            if(a[x-1]!=b[y-1]){
                d[x][y] = max(d[x-1][y] , d[x][y-1]);
            }
            else{
                d[x][y] = d[x-1][y-1] + 1;
            }
        }
    }
    cout<<d[lena][lenb];
}