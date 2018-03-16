#include <iostream>
using namespace std;
int main(){
	string s;
	int i=0,t,ch=0,cs=0;
	getline(cin,s,'\n');
	while(s[i]!='\n'){
		t=s.find(":-)",i);
		if(t!=-1){
			i=t+2;
			ch++;
		}
		else
			break;
	}
	i=0;
	while(s[i]!='\n'){
		t=s.find(":-(",i);
		if(t!=-1){
			i=t+2;
			cs++;
		}
		else
			break;
	}
	if(cs==0 && ch==0)
		cout<<"none";
	else if(cs>ch)
		cout<<"sad";
	else if(cs<ch)
		cout<<"happy";
	else
		cout<<"unsure";
}