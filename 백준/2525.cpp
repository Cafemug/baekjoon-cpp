#include <iostream>
using namespace std;

int main(){
	int hour,min,time;
	int thour,tmin;
	cin>>hour>>min>>time;
	tmin=(min+time)%60;
	thour=(min+time)/60;
	hour+=thour;
	if(hour>=24){
		hour-=24;
	}
	cout<<hour<<" "<<tmin;

	


}