#include <iostream>
using namespace std;
int main(){
	int x[6];
	int resx,resy;
	for(int i=0;i<6;i++){
		cin>>x[i];
	}
	if(x[0]==x[4]){
		
		resx=x[2];
	}
	else if(x[0]==x[2]){
		
		resx=x[4];
	}
	else{
		resx=x[0];
	}
	if(x[1]==x[5]){
		
		resy=x[3];
	}
	else if(x[1]==x[3]){
		
		resy=x[5];
	}
	else{
		
		resy=x[1];
	}
	cout<<resx<<" "<<resy;

}