#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	string s;
	while(!getline(cin,s,'\n').eof()){
		
		int n=s.size();
		int a=0,b=0,c=0,d=0;
		for(int i=0;i<n;i++){
			if(s[i]==' ')
				d++;
			else if('A'<=s[i] && s[i]<='Z')
				b++;
			else if('a'<=s[i] && s[i]<='z')
				a++;
			else
				c++;
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}
}