#include <iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s,'\n');
	for (int i=0;i<s.size();i++){
		if((s[i]=='a' || s[i]=='e' || s[i]=='o' ||s[i]=='i'||s[i]=='u')&& s[i+1]=='p' && s[i]==s[i+2])
			s.erase(i+1,2);
	}
	cout<<s;
}