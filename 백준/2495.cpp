#include <iostream>
#include <cstring>
using namespace std;
int search(string str){
	int res=0,p,i=0,count=1,temp=0;
	char c=str[0];
	res=str.size();
	while(res>i){
		p=str.find(c,i);
		if(p!=i || p==-1){
			count=1;
			c=str[i];
		}
		else{
			i++;
			if(count>temp){
				temp=count;
			}
			count++;
		}
	}
	return temp;
}

int main(){
	string s;
	int resx,num=3;
	while(num-->0){
	cin>>s;
	resx=search(s);
	cout<<resx<<"\n";}
}