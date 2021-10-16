#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    string arr[102],temp,a,b,c;
    int strike[102],ball[102],num,st,ba,count=0,flag;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i]>>strike[i]>>ball[i];
    }
    for(int i=100;i<1000;i++){
        a=(i/100)+'0';
        b=((i%100-i%10)/10)+'0';
        c=i%10+'0';
        if(a==b || b==c || c==a || a=="0"|| b=="0"|| c=="0")
            continue;
        temp=a+b+c;
        flag=1;
        for(int t=0;t<num;t++){
            st=0;
            ba=0;
            for(int j=0;j<3;j++){
                //cout<<"arr" <<arr[t]<<"\n";
                int idx=arr[t].find(temp[j]);
                //cout<<"idx "<<idx<<"\n";
                if(idx!=-1){
                    if(arr[t][j]==temp[j]){
                        st++;
                        //cout<<"st "<<st<<"\n";    
                    }
                    else{
                         ba++;
                         //cout<<"ba"<<ba<<"\n";
                    }
                }
            }
            if(st!=strike[t] || ba!=ball[t]){
                //cout<<temp<<"\n";
                flag=0;
                break;
            }
        }
        if(flag)
            count++;
    }
    cout<<count;
}