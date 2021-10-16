#include <iostream>
using namespace std;
int main(){
	int a[10],b[10];
	int ai=0,bi=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
		cin>>b[i];
	}
	for (int i=0;i<10;i++){
		if(a[i]>b[i])
			ai++;
		else if(a[i]<b[i])
			bi++;
	}
	if(ai>bi)
		cout<<"A";
	else if(ai<bi)
		cout<<"B";
	else
		cout<<"D";
}