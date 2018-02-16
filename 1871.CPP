#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	string c;
	int n,num,a,b,d,res;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,c,'-');
		scanf("%d",&num);
		a=c[0];
		b=c[1];
		d=c[2];
		res=(a-65)*pow(26,2)+(b-65)*pow(26,1)+d-65;
		if(abs(res-num)<=100)
			printf("%s\n","nice");
		else
			printf("%s\n","not nice");
	}

}