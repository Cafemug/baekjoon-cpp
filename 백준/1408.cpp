#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int oh,om,os,nh,nm,ns;
	int resh=0,resm=0,ress=0;
	char t;
	cin>>oh>>t>>om>>t>>os;
	cin>>nh>>t>>nm>>t>>ns;
	if(nh>oh){
		resh=nh-oh;
		if(nm>om){
			resm=nm-om;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm--;
			}
		}
		else if(nm==om){
			resm=nm-om;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm=59;
				resh--;
			}
		}
		else{
			resm=60-(om-nm);
			resh--;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm--;
			}
		}
	}
	else if(nh==oh){
		resh=nh-oh;
		if(nm>om){
			resm=nm-om;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm--;
			}
		}
		else if(nm==om){
			resm=nm-om;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm=59;
				resh==23;
			}
		}
		else{
			resm=60-(om-nm);
			resh=23;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm--;
			}
		}
	}
	else{
		resh=24-(oh-nh);
		if(nm>om){
			resm=nm-om;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm--;
			}
		}
		else if(nm==om){
			resm=nm-om;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm=59;
				resh--;
			}
		}
		else{
			resm=60-(om-nm);
			resh--;
			if(ns>=os){
				ress=ns-os;
			}
			else{
				ress=60-(os-ns);
				resm--;
				
			}
		}
		}
		cout<<resh/10<<resh%10<<':'<<resm/10<<resm%10<<':'<<ress/10<<ress%10<<endl;
	
}