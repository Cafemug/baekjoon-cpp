#include <iostream>
using namespace std;
int gcd(int b,int s){
	if(s==0)
		return b;
	else
		return gcd(s,b%s); 
}
int main(){
	int num,a,b,Gcd,lcm;
	cin>>num;
	for (int i=0; i<num;i++){
		cin>>a>>b;
		if(a>=b)
			Gcd=gcd(a,b);
		else
			Gcd=gcd(b,a);
		lcm=a*b/Gcd;
		cout<<lcm<<" "<<Gcd<<"\n";
	}

}