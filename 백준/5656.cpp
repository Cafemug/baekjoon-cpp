#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b,i=1;
	string e;
	while(1){
		cin>>a>>e>>b;
		if(e=="E")
			break;
		else if(e==">"){
			if(a>b)
				printf("Case %d: true\n",i);
			else
				printf("Case %d: false\n",i);
		}
		else if(e==">="){
			if(a>=b)
				printf("Case %d: true\n",i);
			else
				printf("Case %d: false\n",i);
		}
		else if(e=="<"){
			if(a<b)
				printf("Case %d: true\n",i);
			else
				printf("Case %d: false\n",i);
		}
		else if(e=="<="){
			if(a<=b)
				printf("Case %d: true\n",i);
			else
				printf("Case %d: false\n",i);
		}
		else if(e=="=="){
			if(a==b)
				printf("Case %d: true\n",i);
			else
				printf("Case %d: false\n",i);
		}
		else if(e=="!="){
			if(a!=b)
				printf("Case %d: true\n",i);
			else
				printf("Case %d: false\n",i);
		}
		i++;
	}
}