#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a[10],b[10];
	int ac=0,bc=0,res=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
		cin>>b[i];
	}
	for(int i=0;i<10;i++){
		if(a[i]>b[i]){
			ac+=3;
			res=2;
		}
		else if(a[i]==b[i]){
			bc++;
			ac++;
		}
		else{
			bc+=3;
			res=1;
		}
	}
	if(ac>bc)
		printf("%d %d\n%c",ac,bc,'A');
	else if(ac<bc)
		printf("%d %d\n%c",ac,bc,'B');
	else{
		if(res==0)
			printf("%d %d\n%c",ac,bc,'D');
		else if(res==1)
			printf("%d %d\n%c",ac,bc,'B');
		else
			printf("%d %d\n%c",ac,bc,'A');
	}
}