#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,temp1y=0,temp1m=0,temp1d=0,temp2y=9999,temp2m=9999,temp2d=9999,d,m,y;
	char str[16],young[16],old[16];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>str>>d>>m>>y;
		if(y>temp1y){
			temp1y=y;
			temp1m=m;
			temp1d=d;
			strcpy(young,str);
		}
		else if(y==temp1y){
			if(m>temp1m){
				temp1y=y;
				temp1m=m;
				temp1d=d;
				strcpy(young,str);
			}
			else if(m==temp1m){
				if(d>temp1d){
					temp1y=y;
					temp1m=m;
					temp1d=d;
					strcpy(young,str);
				}
			}
		}
		if(y<temp2y){
			temp2y=y;
			temp2m=m;
			temp2d=d;
			strcpy(old,str);
		}
		else if(y==temp2y){
			if(m<temp2m){
				temp2y=y;
				temp2m=m;
				temp2d=d;
				strcpy(old,str);
			}
			else if(m==temp2m){
				if(d<temp2d){
					temp2y=y;
					temp2m=m;
					temp2d=d;
					strcpy(old,str);
				}
			}
		}
		
	}
	cout<<young<<endl;
	cout<<old<<endl;
	
}