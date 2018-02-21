#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int i=0;
	while(++i){
		string a,b;
		cin>>a>>b;
		if(a=="END" && b=="END")
			break;
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(a==b)
			printf("Case %d: same\n",i);
		else
			printf("Case %d: different\n",i);

	}
	

}