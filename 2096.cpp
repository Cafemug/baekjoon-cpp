#include <iostream>
#include <cmath>
using namespace std;
int maxd[100001][3];
int mind[100001][3];
int arr[100001][3];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,maxres,minres;
    cin>>num;
    for(int i=0;i<num;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(i==0){
            maxd[i][0]=a;
            maxd[i][1]=b;
            maxd[i][2]=c;
            mind[i][0]=a;
            mind[i][1]=b;
            mind[i][2]=c;
        }
        else{
            maxd[i][0]=max(maxd[i-1][0],maxd[i-1][1])+a;
            maxd[i][1]=max(maxd[i-1][0],max(maxd[i-1][1],maxd[i-1][2]))+b;
            maxd[i][2]=max(maxd[i-1][2],maxd[i-1][1])+c;
            mind[i][0]=min(mind[i-1][0],mind[i-1][1])+a;
            mind[i][1]=min(mind[i-1][0],min(mind[i-1][1],mind[i-1][2]))+b;
            mind[i][2]=min(mind[i-1][2],mind[i-1][1])+c;
        }
    }
    maxres = max(maxd[num-1][0],max(maxd[num-1][1],maxd[num-1][2]));
    minres= min(maxd[num-1][0],min(maxd[num-1][1],mind[num-1][2]));
    cout<<maxres<<" "<<minres;
}