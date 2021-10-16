#include <iostream>
using namespace std;

int main(){
	int hour,min,sec,time;
	int thour,tmin,tsec;
	cin>>hour>>min>>sec>>time;
	tsec=(sec+time)%60;
	tmin=(sec+time)/60;
	min+=tmin;
	tmin=min%60;
	thour=min/60;
	hour+=thour;
	if(hour>=24){
		hour%=24;
	}
	cout<<hour<<" "<<tmin<<" "<<tsec;

	


}