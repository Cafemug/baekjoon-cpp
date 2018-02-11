#include <iostream>
using namespace std;
int main(){
	int a,b,temp=0;
	cin>>b>>a;
	for(int i=1;i<a;i++){
		if(i<=7 && i%2==1){
			temp+=31;
		}
		else if(i==2){
			temp+=28;
		}
		else if(i>=8 && i%2==0){
			temp+=31;
		}
		else{
			temp+=30;
		}
	}
	temp+=b;
	temp%=7;
	switch(temp){
		case 0:
			cout<<"Wednesday";
			break;
		case 1:
			cout<<"Thursday";
			break;
		case 2:
			cout<<"Friday";
			break;
		case 3:
			cout<<"Saturday";
			break;
		case 4:
			cout<<"Sunday";
			break;
		case 5:
			cout<<"Monday";
			break;
		case 6:
			cout<<"Tuesday";
			break;
	}
}