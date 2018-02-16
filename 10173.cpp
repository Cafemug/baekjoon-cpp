#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s;
	while(1){
		getline(cin,s,'\n');
		if(s=="EOI")
			break;
		transform(s.begin(),s.end(),s.begin(),::tolower);
		if(s.find("nemo")!=-1)
			cout<<"Found"<<endl;
		else
			cout<<"Missing"<<endl;
	}
}