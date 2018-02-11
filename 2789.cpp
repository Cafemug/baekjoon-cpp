#include <iostream>
using namespace std;
int main(){
	string str;
	int num;
	cin>>str;
	num=str.size();
	for(int i=0;i<num;i++){
		if(str[i] == 'C' || str[i] =='A' || str[i] =='M' || \
			str[i] =='B' || str[i] =='R' || str[i] =='I' || str[i] =='D' || str[i] =='G' || str[i] =='E' ){
			str[i] = '\0';
		}
	}
	for(int i = 0; i < num; i++){
		if(str[i] != '\0')
			cout<<str[i];
	}
}