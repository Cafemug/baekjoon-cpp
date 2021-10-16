#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,xi,yi,xt,yt;
	char x,y;
	cin>>a;
	while(a>0){
		cin>>b;
		xi=0;
		yi=0;
		while(b>0){
			cin>>x>>y;
			xt=x;
			yt=y;
			if(abs(xt-yt)==3){
				if(xt==83)
					xi++;
				else
					yi++;
			}
			else if(abs(xt-yt)==2){
				if(yt==82)
					xi++;
				else
					yi++;
			}
			else if(abs(xt-yt)==1){
				if(xt==83)
					yi++;
				else
					xi++;
			}
			b--;
		}
		if(xi>yi)
			cout<<"Player 1"<<endl;
		else if(xi<yi)
			cout<<"Player 2"<<endl;
		else
			cout<<"TIE"<<endl;
		a--;
	}
}