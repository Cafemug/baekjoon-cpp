#include <iostream>
using namespace std;
int arr[3]={0,};
int main(){
    string s;
    arr[0]=1;;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='A'){
            int temp=arr[1];
            arr[1]=arr[0];
            arr[0]=temp;
        }
        else if(s[i]=='B'){
            int temp=arr[2];
            arr[2]=arr[1];
            arr[1]=temp;
            
        }
        else if(s[i]=='C'){
            int temp=arr[2];
            arr[2]=arr[0];
            arr[0]=temp;
            
        }
    }
    for(int i=0;i<3;i++){
        if(arr[i]==1){
            cout<<i+1;
            return 0;
        }
    }
}