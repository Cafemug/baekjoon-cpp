#include <iostream>
#include <cstring>
using namespace std;
char arr[251][251];
bool check[251][251];
int xi[]={1,-1,0,0};
int yi[]={0,0,1,-1};
int a,b;
int tmpyang=0,tmpnek=0,yang=0,nek=0;
void dfs(int x, int y){
    check[x][y]=true;
    if(arr[x][y]=='o')
        tmpyang++;
    if(arr[x][y]=='v')
        tmpnek++;
    arr[x][y]='#';
    for(int i=0;i<4;i++){
        int tx=xi[i]+x;
        int ty=yi[i]+y;
        if(tx>=a || tx<0 || ty>=b ||ty<0||arr[tx][ty]=='#')
            continue;
        if(!check[tx][ty]){
            dfs(tx,ty);
        }
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(check,false,sizeof(check));
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(check[i][j]==true)
                continue;
            if(arr[i][j]!='#'){
                dfs(i,j);
                if(tmpyang>tmpnek)
                    yang+=tmpyang;
                else
                    nek+=tmpnek;
                tmpyang=0;
                tmpnek=0;
            }
       }
   }
   cout<<yang<<" "<<nek<<"\n";
}