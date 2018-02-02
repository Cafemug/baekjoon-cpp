#include <iostream>
using namespace std;
int main(){
	char s[102];
	string t;
	int te,temp;
	cin.getline(s,102);
	t=s;

	for(int i=0;i<t.size();i++){
		te=t[i];
		if(te<=57 && te>=48){
			te-=48;
			cout<<te;
		}
		else{	
		if(te<=90 && te>=65){
			te+=13;
			if(te>90){
				temp=te-91;
				te=65+temp;
			}
		}
		else if(te<=122 && te>=97){
			te+=13;
			if(te>122){
				temp=te-123;
				te=97+temp;
			}
		}
		t[i]=te;
		cout<<t[i];
	}
	}
	//cout<<t;
}