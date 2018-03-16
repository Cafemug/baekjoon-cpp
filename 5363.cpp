#include <iostream>
using namespace std;
int main(){
	int a,b,i=0,tmp,tmp1;
	string s;
	cin>>a;
	cin.ignore();
	while(a-->0){
		
		getline(cin,s,'\n');
		b=s.size();
		i=0;
		for(int k=0;k<2;k++){
		tmp=i;
		for(i=i;s[i]!='\0';i++){
			if(s[i]==' ')
				break;
		}
		tmp1=i;
		i++;
		}
		for(int t=tmp1+1;t<b;t++){
			cout<<s[t];
		}
		cout<<s[tmp1];
		for(int t=0;t<tmp1;t++){
			cout<<s[t];
		}
		cout<<"\n";
	}
}