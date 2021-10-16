#include <iostream>
using namespace std;
int arr[6][6];
int check[26]={0,};
int checkbingo(){
    int count=0,flag=1;
    //가로
    for(int i=1;i<=5;i++){
        flag =1;
        for(int j=1;j<=5;j++){
            if(check[arr[i][j]]!=-1){
                flag=0;
                break;
            }
        }
        if(flag)
            count++;
    }
    //세로
    for(int i=1;i<=5;i++){
        flag=1;
        for(int j=1;j<=5;j++){
            if(check[arr[j][i]]!=-1){
                flag=0;
                break;
            }
        }
        if(flag)
            count++;
    }
    //대각선 - 정방향
    flag=1;
    for(int i=1;i<=5;i++){
        if(check[arr[i][i]]!=-1){
            flag=0;
            break;
        }
    }
    if(flag)
        count++;
    //대각선 - 역방향
    flag=1;
    for(int i=1;i<=5;i++){
        if(check[arr[6-i][i]]!=-1){
            flag=0;
            break;
        }
    }
    if(flag)
        count++;
    if(count>=3)
        return 1;
    else
    {
        return 0;
    }
    
}
int main(){
    int idx=1,res;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>arr[i][j];
            check[arr[i][j]]=1;
        }
    }
    for(int i=1;i<=25;i++){
      
        int temp;
        cin>>temp;
        check[temp]=-1;
        int finds = checkbingo();
        if(finds && idx){
            idx=0;
            res=i;
        }
    }
    cout<<res;

}