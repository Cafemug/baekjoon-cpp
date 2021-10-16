#include <iostream>
#include <cstdio>
using namespace std;

char arr[9][9]={
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
char arr1[9][9]={
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
char chess[55][55];
int temp=0,res=99999,tot=0;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%s",chess[i]);
    }
    for(int i=0;i<n;i++){
        temp=0;
        if(i+8>n)
            break;
        for(int j=0;j<m;j++){
            temp=0;
            if(j+8>m)
                break;
            for(int p=i;p<i+8;p++){
                    if(p>n)
                        break;
                for(int q=j;q<j+8;q++){
                    if(q>m)
                        break;
                    if(chess[p][q]!=arr[p-i][q-j]){
                        //cout<<chess[p][q];
                        temp++;
                    }
                }  
            }
            //cout<<"\n";
            res=min(res,temp);
            temp=0;
            for(int p=i;p<i+8;p++){
                    if(p>n)
                        break;
                for(int q=j;q<j+8;q++){
                    if(q>m)
                        break;
                    if(chess[p][q]!=arr1[p-i][q-j]){
                        //cout<<chess[p][q];
                        temp++;
                    }
                }  
            }
           // cout<<"\n";
            res=min(res,temp);
            temp=0;
        }
    }
    cout<<res;
}