#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int cnt = 0, N, i=666;

	cin >> N;

	while (cnt < N)
	{
		string s = to_string(i);
		if (s.find("666") != string::npos)
		{
			cnt++;
			if (cnt == N)
			{
				cout << s ;
				break;
			}
		}
		i++;
	}
}