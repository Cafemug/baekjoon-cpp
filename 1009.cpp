#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long long a,b,c,d=1;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		d=pow(b,c);
		if(d%10!=0){
			cout<<d%10<<endl;
		}
		else{
			cout<<10<<endl;
		}
	}

}