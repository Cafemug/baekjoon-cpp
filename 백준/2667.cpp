#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
char arr[26][26];
int res[26*26];
int k=0;
int num;
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };
void dfs(int x, int y){
    arr[x][y] = '0';
	res[k]++;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || nx >= num || ny < 0 || ny >= num) 
            continue;
		if (arr[nx][ny] == '1') 
            dfs(nx, ny);
	}

}
int main(){
    
    cin>>num;
    for(int i=0;i<num;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(arr[i][j]=='1'){
                k++;
                dfs(i,j);
            }
        }
    }
    cout<<k<<"\n";
    sort(res,res+k+1);
    for(int i=1;i<=k;i++){
        cout<<res[i]<<"\n";
    }
}