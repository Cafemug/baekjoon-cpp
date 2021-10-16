#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,sum=0,temp=0,res;
	for(int i=0;i<5;i++){
		cin>>a>>b>>c>>d;
		sum=a+b+c+d;
		if(sum>=temp){
			temp=sum;
			res=i+1;
		}
	}
	cout<<res<<" "<<temp;

}