#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a,b;
	while(!cin.eof()){
		if(cin.eof()){
			//cout<<1;
			cin.ignore();
			break;
		}
		else{
		int count=0;
		//cout<<count;
		cin>>a>>b;
		int al=a.size();
		int bl=b.size();
		if(al>bl){
			//sort(b.begin(),b.end());
			int i=0;
			while(i<bl){
				if(b[i]==b[i+1]){
					i++;
					continue;
				}
				else{
					int r=a.find(b[i],i);
					if(r!=-1)
						count++;
				}
				i++;
			}
		}
		else if(al<bl){
			//sort(a.begin(),a.end());
			int i=0;
			while(i<al){
				if(a[i]==a[i+1]){
					i++;
					continue;
				}
				else{
					int r=b.find(a[i],i);
					if(r!=-1)
						count++;
				}
				i++;
			}

		}
		else{
			int i=0,temp;
			while(i<al){
				if(a[i]==a[i+1]){
					i++;
					continue;
				}
				else{
					int r=b.find(a[i],i);
					if(r!=-1)
						count++;
				}
				i++;
			}
			i=0;
			temp=count;
			while(i<bl){
				if(b[i]==b[i+1]){
					i++;
					continue;
				}
				else{
					int r=a.find(b[i],i);
					if(r!=-1)
						count++;
				}
				i++;
			}
			if(count<temp)
				count=temp;
		}
		cout<<count<<"\n";
	}
	}
}