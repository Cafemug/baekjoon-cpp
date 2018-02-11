#include <iostream>
using namespace std;
string change(string str){
	int a=str.size();	
	for(int i=0;i<a;i++){
		if(str[i]=='1')
			str[i]='0';
		else
			str[i]='1';
	}
	return str;
}
int main(){
	int num;
	string first,last,temp;
	cin>>num;
	cin>>first;
	while(num>0){
		temp=change(first);
		first=temp;
		num--;
	}
	cin>>last;
	if(temp==last)
		cout<<"Deletion succeeded";
	else
		cout<<"Deletion failed";
}