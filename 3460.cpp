#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a,b,s[20],k=0,count=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		k=0;
		count=0;
		while(b!=1){
			s[k]=b%2;
			b=b/2;
			k++;
		}
		s[k]=1;
		
		for(int z=0;z<=k;z++){
			if(s[z]==1){
				cout<<z<<" ";
			}

		}
		cout<<endl;

}

}