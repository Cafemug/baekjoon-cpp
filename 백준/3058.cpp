#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,k,sum=0;
	vector<int> arr;
	cin>>n;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=0;j<7;j++){
			cin>>k;
			if(k%2==0){
				sum+=k;
				arr.push_back(k);
			}
		}
		sort(arr.begin(),arr.end());
		cout<<sum<<" "<<arr[0]<<endl;
		arr.erase(arr.begin(),arr.end());

	}

}