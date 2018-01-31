#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
	char str[1000];
	int lens,num;
	string a="#",b="@",c="%";
	double res;
	string token[100];
	cin>>num;
	cin.ignore();
	int i=0;
	for(int j=0;j<num;j++){
		i=0;
		str[1000]={0,};
		cin.getline(str,1000);
		istringstream iss(str);
		lens=strlen(str);
		while(getline(iss,token[i],' ')){
			if(i==0){
			res=atof(token[i].data());
			}
			else{
			if(token[i].compare(a)==0){
				res-=7;
			}
			else if(token[i].compare(b)==0){
				res*=3;
			}
			else if(token[i].compare(c)==0){
				res+=5;
			}
		}
		i++;
		}
		printf("%.2f\n",res);
		}
}