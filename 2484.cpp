#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int arr[4],t;
	int num,res,temp=1,re=0,te=0,n;
	cin>>num;
	while(num-->0){
		res=1;temp=1;
		scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
		sort(arr,arr+4);
		if(arr[0]==arr[1] && arr[2]==arr[3] && arr[1]!=arr[2]){
			re=2000+arr[0]*500+arr[2]*500;
		}
		else{
			t=arr[0];
			for(int i=1;i<4;i++){
				if(t!=arr[i]){
					t=arr[i];
					temp=1;
				}
				else{
					temp++;
					if(temp>res){
						res=temp;
						n=arr[i];
					}
				}
			}
			if(res==4){
				re=arr[0]*5000+50000;
			}
			else if(res==3){
				re=n*1000+10000;
			}
			else if(res==2){
				re=n*100+1000;
			}
			else
				re=arr[3]*100;
		}
		if(re>te){
			te=re;
		}
	}
	cout<<te;
}