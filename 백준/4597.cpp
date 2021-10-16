#include <iostream>
using namespace std;
int main(){
	string s;
	int len,count;
	while (1){
		count=0;
		cin>>s;
		if(s=="#")
			break;
		len=s.size();
		for (int i=0;i<len;i++){
			if(s[i]=='1')
				count++;
		}
		if(s[len-1]=='e'){
			if(count%2==0)
				s[len-1]='0';
			else
				s[len-1]='1';
		}
		else{
			if(count%2!=0)
				s[len-1]='0';
			else
				s[len-1]='1';
		}
		cout<<s<<"\n";
	}
}