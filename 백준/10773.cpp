#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n,a,sum=0;
	vector<int> vec;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==0){
			vec.pop_back();
		}
		else{
			vec.push_back(a);
		}
	}
	for(int k=0;k<vec.size();k++){
		sum+=vec[k];
	}
	cout<<sum;
}