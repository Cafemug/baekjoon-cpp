#include <iostream>
#include <string>
using namespace std;
int cal(string str){
	int a=str.size();
	string s;
	int temp=0;
	for(int i=65;i<91;i++){
		s=i;
		if(!(str.find(s)>=0 & str.find(s)<a)){
			temp+=i;
		}
	}
	return temp;
}
int main(){
	int num,res;
	string str;
	cin>>num;
	cin.ignore();
	while(num>0){
		getline(cin, str, '\n');
		res=cal(str);
		cout<<res<<endl;
		num--;
	}
}