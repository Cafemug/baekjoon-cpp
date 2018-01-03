#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int a,b,c;
	int x[3];
	int temp=0,te=0;
	int res;
	int num;
	cin>>num;
	for(int k=0;k<num;k++){
	cin>>a>>b>>c;
	x[0]=a;
	x[1]=b;
	x[2]=c;

	if(a!=b && b!=c && a!=c){
		//cout<<1;
		for(int i=0;i<3;i++){
			if(x[i]>temp){
				temp=x[i];
			}
			res=temp*100;
		}
		
	}
	else if(a==b && b==c && c==a){
		//cout<<2;
		res=10000+a*1000;
	} 
	else{
		//cout<<3;
		if(a==c){
			res=1000+a*100;
		}
		else{
			res=1000+b*100;
		}
		
	}
	if(res>te){
		te=res;
	}
}
	cout<<te;

}