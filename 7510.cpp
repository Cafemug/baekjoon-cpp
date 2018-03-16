#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b>>c>>d;
		e=max(b,max(c,d));
		if(b==e){
			if(b*b==c*c+d*d)
				printf("Scenario #%d:\nyes\n\n",i);
			else
				printf("Scenario #%d:\nno\n\n",i);
		}
		else if(c==e){
			if(c*c==b*b+d*d)
				printf("Scenario #%d:\nyes\n\n",i);
			else
				printf("Scenario #%d:\nno\n\n",i);
		}
		else{
			if(d*d==c*c+b*b)
				printf("Scenario #%d:\nyes\n\n",i);
			else
				printf("Scenario #%d:\nno\n\n",i);
		}

	}

}