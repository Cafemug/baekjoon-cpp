#include <iostream>
using namespace std;
int main(){
	string s;
	int k=0;
	for(int i=1;i<6;i++){
		cin>>s;
		int t=s.find("FBI");
		if(t>=0){
			cout<<i<<" ";
			k++;
		}
	}
	if(k==0)
		cout<<"HE GOT AWAY!";
}