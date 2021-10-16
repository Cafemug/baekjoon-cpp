#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int num,a,b,q1=0,q2=0,q3=0,q4=0,q5=0;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>a>>b;
		if(a==0 || b==0){
			q5++;
		}
		else if(a>0 && b>0){
			q1++;
		}
		else if(a>0 && b<0){
			q4++;
		}
		else if(a<0 && b>0){
			q2++;
		}
		else if(a<0 && b<0){
			q3++;
		}
	}
	cout<<"Q1: "<<q1<<endl;
	cout<<"Q2: "<<q2<<endl;
	cout<<"Q3: "<<q3<<endl;
	cout<<"Q4: "<<q4<<endl;
	cout<<"AXIS: "<<q5<<endl;
}