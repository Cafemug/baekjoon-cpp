#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a;
	double b,c;
	string s;
	cin>>a;
	while(a-->0){
		cin>>b>>s;
		if(s=="kg"){
			c=b*2.2046;
			printf("%.4f lb\n",c);
		}
		else if(s=="l"){
			c=b*0.2642;
			printf("%.4f g\n",c);
		}
		else if(s=="lb"){
			c=b*0.4536;
			printf("%.4f kg\n",c);
		}
		else if(s=="g"){
			c=b*3.7854;
			printf("%.4f l\n",c);
		}
	}
}