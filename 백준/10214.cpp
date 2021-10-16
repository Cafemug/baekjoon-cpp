#include <iostream>
using namespace std;
int main(){
	int num,a,b,resy,resk;
	cin>>num;
	for(int i=0;i<num;i++){
		resy=0;
		resk=0;
		for(int j=0;j<9;j++){
			cin>>a>>b;
			resy+=a;
			resk+=b;
		}
		if(resy>resk){
			cout<<"Yonsei"<<endl;
		}
		else if(resy>resk){
			cout<<"Korea"<<endl;
		}
		else{
			cout<<"Draw"<<endl;
		}
	}
}
