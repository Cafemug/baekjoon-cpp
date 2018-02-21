#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s,st;
	int num,tmp;
	cin>>num;
	cin.ignore();
	int i=0;
	while(num-->0){
		i=0;
		getline(cin,s,'\n');
		int tk=0;
		int len=s.size();
		int t=len;
		while(len-->0){
			tmp=i;
			for(i=i;s[i]!='\0';i++){
				if(s[i]==' ')
					break;
			}
			st=s.substr(tmp,i-tmp);
			reverse(st.begin(),st.end());
			if(i==t){
				cout<<st<<"\n";
				break;
			}
			else
				cout<<st<<" ";
			i++;
		}
		
	}

}