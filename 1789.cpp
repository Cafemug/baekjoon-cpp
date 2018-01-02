#include<iostream>
using namespace std;
int main()
{
long long S;
cin >> S;
long long x=0;
long long num=1;
while (x < S)
{
		x = x + num;
		num++;
	}
	if (x == S)
	{
		cout << num - 1 << endl;
	}
	else {
		cout << num - 2 << endl;
	}
}

 