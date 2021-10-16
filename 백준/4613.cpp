#include <iostream>
using namespace std;
int main(){
	string s;
	int size,a,sum=0;
	while(1){
		getline(cin,s,'\n');
		if(s=="#")
			break;
		size=s.size();
		sum=0;
		for(int i=0;i<size;i++){
			if(s[i]==' ')
				a=0;
			else{
				a=s[i];
				a-=64;
			}
			sum+=a*(i+1);
		}
		cout<<sum<<"\n";
	}

}