#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	bool chk = true;
	string str1, str2;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int test;
		cin >> test;
		while(test--)
		{
			cin >> str1 >> str2;
			if(str2 != "wine")
				chk = false;
		}
		if(chk)
			printf("Case %d: Yes\n", i + 1);
		else	printf("Case %d: No\n", i + 1);
	}
	return 0;
}
