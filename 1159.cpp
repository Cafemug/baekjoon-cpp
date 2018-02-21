#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,count=1,p=0,k=0;
	string s;
	char* arr=new char(a);
	char t;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>s;
		arr[i]=s[0];
	}
	sort(arr,arr+a);
	t=arr[0];
	for(int i=1;i<a;i++){
		if(t==arr[i]){
			count++;
		}
		if(count>=5 && p==0){
			cout<<t;
			p=1;
			k++;
		}
		if(t!=arr[i]){
			t=arr[i];
			count=1;
			p=0;
		}
	}
	if(k==0)
		cout<<"PREDAJA";
}