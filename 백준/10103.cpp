#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num,a,b;
	int x=100,y=100;
	int res;
	
	cin>>num;
	for(int i=0;i<num;i++){
	cin>>a>>b;
	if(a>b){
		y-=a;
		
	}
	else if(a<b){
		x-=b;

	}

	}
	cout<<x<<endl;
	cout<<y;

}